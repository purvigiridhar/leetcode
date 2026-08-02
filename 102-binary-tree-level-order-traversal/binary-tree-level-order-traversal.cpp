/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==nullptr)
        {
            return result;
        }
        std::queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int levelsize = q.size();
            std::vector<int>currentLevel;
            for(int i=0;i<levelsize;++i)
            {
                TreeNode* CurrentNode = q.front();
                q.pop();
                currentLevel.push_back(CurrentNode->val);
                if(CurrentNode->left!=nullptr)
                {
                    q.push(CurrentNode->left);
                }
                if(CurrentNode->right!=nullptr)
                {
                    q.push(CurrentNode->right);
                }
            }
            result.push_back(currentLevel);               
        }
        return result;
    }
};
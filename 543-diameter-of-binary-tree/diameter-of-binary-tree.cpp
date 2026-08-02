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
    int helper(TreeNode* root, int& maxD)
    {
        if(root==nullptr)
        {
            return 0;
        }
        int leftH = helper(root->left, maxD);
        int rightH = helper(root->right, maxD);

        maxD = std::max(maxD, leftH + rightH);
        
        return std::max(leftH,rightH)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxD = 0;
        helper(root, maxD);
        return maxD;
    }
};
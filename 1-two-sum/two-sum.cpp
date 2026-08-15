class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++)
            hash[nums[i]]=i;
        for(int i=0;i<nums.size();i++)
        {
            int x = target - nums[i];
            auto it = hash.find(x);
            if(it!=hash.end() && it->second!=i)
                return {it->second,i};
        }
        return {};
    }
};
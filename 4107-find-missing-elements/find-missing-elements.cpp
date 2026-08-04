class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        auto [min_addr, max_addr]= minmax_element(nums.begin(),nums.end());
        int min = *min_addr;
        int max = *max_addr;
        std::unordered_set<int> num_set(nums.begin(),nums.end());
        std::vector<int> missing;
        for(int i=min+1; i<max ; i++)
        {
            if(num_set.count(i)==0)
            {
                missing.push_back(i);
            }
        }
        return missing;
    }
};
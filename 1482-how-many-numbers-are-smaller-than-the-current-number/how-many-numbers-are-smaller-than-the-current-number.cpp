class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>count(102,0);
        for(int i : nums)
            count[i]++;
        int running_sum=0;
        vector<int>smaller_than(102,0);
        for(int i=0;i<=100;i++)
        {
            smaller_than[i]=running_sum;
            running_sum+=count[i];
        }
        vector<int> result;
        for(int i=0;i<nums.size();i++)
            result.push_back(smaller_than[nums[i]]);
        return result;
        
    }
};
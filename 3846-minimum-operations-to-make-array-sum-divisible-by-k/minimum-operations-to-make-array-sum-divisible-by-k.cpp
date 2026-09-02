class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count =0;
        int n = nums.size();
        int sum = std::accumulate(nums.begin(), nums.end(), 0);
        int rem = sum % k;
        if(rem==0)
            return 0;
        else
            return rem;
    }   
};
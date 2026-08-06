class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return helper(nums,goal)- helper(nums,goal-1);
    } 

private:
    int helper(vector<int>& nums, int goal)
    {
        int left=0, right=0, sum=0, count=0;
        for(int right=0; right<nums.size(); right++)
        {
            if(goal<0)
                return 0;
            sum+=nums[right];
            while(sum>goal)
            {
                sum-=nums[left];
                left+=1;
            }
            count+=(right-left+1);
        }
        return count;   
    }
};
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxc=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                count+=1;
            if(count>maxc)
                maxc=count;  
            if(nums[i]==0)
                count=0;
        }
        return maxc;
    }
};
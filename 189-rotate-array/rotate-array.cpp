class Solution {
private:
    void reverse(vector<int>& nums, int start, int end)
    {
        while(start<end)
        {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
public:
    vector<int> rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        if( n==0 || k==0) return nums;
        k=k%n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        return nums;
    }
};
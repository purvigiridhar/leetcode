class Solution(object):
    def containsDuplicate(self, nums):
        nums.sort()
        for x in range(0,len(nums)-1):
            if nums[x]==nums[x+1]:
                return True
        return False
            
        """
        :type nums: List[int]
        :rtype: bool
        """
        
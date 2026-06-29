class Solution(object):
    def plusOne(self, digits):
        i = len(digits)
        for x in range(i-1,-1,-1):
            if digits[x]<9:
                digits[x]+=1
                return digits
            digits[x]=0

        return [1]+ digits



        """
        :type digits: List[int]
        :rtype: List[int]
        """
        
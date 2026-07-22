class Solution(object):
    def lengthOfLastWord(self, s):
        x=len(s)-1
        count=0
        
        while x>=0 and s[x]==' ':
            x-=1

        while x>=0 and s[x] != ' ':
            count+=1
            x-=1
        
        return count

        """
        :type s: str
        :rtype: int
        """
        
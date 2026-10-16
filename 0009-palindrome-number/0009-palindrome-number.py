class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0: 
            return False
        
        num = x
        result = 0
        while num > 0:
            result = result * 10 + num % 10
            num = num // 10
        if num < -2**31 or num > 2**31 - 1:
            return False
            
        return result == x
        
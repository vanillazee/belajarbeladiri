class Solution:
    def isPalindrome(self, x: int) -> bool:
        if str(x) == reversed(str(x)):
            return True
        else:
            return False
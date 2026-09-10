class Solution(object):
    def isPalindrome(self, s):
        
        left = 0
        right = len(s) - 1

        while left < right:

            # non-alphanumeric left side ko skip karo
            while left < right and not s[left].isalnum():
                left += 1

            # non-alphanumeric right side ko skip karo
            while left < right and not s[right].isalnum():
                right -= 1

            # lowercase karke compare
            if s[left].lower() != s[right].lower():
                return False

            left += 1
            right -= 1

        return True
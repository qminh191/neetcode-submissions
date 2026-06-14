class Solution:
    def isPalindrome(self, s: str) -> bool:
        l = 0
        r = -1
        new_s = ""
        for char in s:
            if char.isalnum():
                 new_s += char.lower()
        if len(new_s) == 0:
            return True
        while True:
            if new_s[l] == new_s[r]:
                if l == len(new_s) // 2:
                    return True
                l += 1
                r -= 1
            else: 
                return False
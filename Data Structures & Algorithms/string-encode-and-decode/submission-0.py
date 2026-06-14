class Solution:
    def encode(self, strs):
        s = ""
        for word in strs:
            s += str(len(word)) + "#" + word
        return s
    def decode(self, s):
        res, n = [], 0
        while len(s) > n:
            m = n
            while s[m] != "#":
                m += 1
            length = int(s[n:m])
            res.append(s[m + 1: length + m + 1])
            n = m + length + 1
        return res
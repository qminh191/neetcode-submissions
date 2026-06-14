class Solution:
    def productExceptSelf(self, nums):
        res = []
        n = 1
        for num in nums:
            res.append(n)
            n *= num
        m = nums[-1]
        x = -1
        for num in nums[::-1]:
            if x == -1:
                None
                x += -1
            else:
                res[x] *= m
                m *= num
                x += -1
        return res
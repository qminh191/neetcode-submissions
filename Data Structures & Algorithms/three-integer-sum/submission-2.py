class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        res = set()
        nums.sort()
        for i in range(len(nums)):
            target = - nums[i]
            j = i + 1
            k = len(nums) - 1
            while j < k:
                if nums[j] + nums[k] == target:
                    list_num = [nums[i], nums[j], nums[k]]
                    res.add(tuple(list_num))
                    j += 1
                elif nums[j] + nums[k] >= target:
                    k -= 1
                else:
                    j += 1
        return  [list(i) for i in res]
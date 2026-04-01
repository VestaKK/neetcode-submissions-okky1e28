class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:

        out = []

        nums.sort()

        for i in range(len(nums)):

            target = 0 - nums[i] 

            # do two sum lol
            l, r = i + 1, len(nums) - 1

            while l < r:

                summ = nums[l] + nums[r]

                if summ == target:
                    out.append((nums[i], nums[l], nums[r]))

                if summ > target:
                    r -= 1
                else:
                    l += 1 
                
        s = set(out)
        out2 = [list(i) for i in s]
        return out2



     
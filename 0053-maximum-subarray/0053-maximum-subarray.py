import sys
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxSum = nums[0]
        s=0
        for i in nums:
            s+=i
            if(s>maxSum):
                maxSum = s
            if(s<0):
                s=0
        return maxSum

        
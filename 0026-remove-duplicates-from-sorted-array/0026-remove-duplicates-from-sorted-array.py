class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        n = len(nums)
        l=0
        r=1
        while(r<n):
            if(nums[l]==nums[r]):
                r+=1
            else:
                l+=1
                nums[l],nums[r]=nums[r],nums[l]
                r+=1
        return l+1
        


        
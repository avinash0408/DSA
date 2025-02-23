class Solution:
    def binSearch(self,arr,low,high,target):
        while(low<=high):
            mid = (low+high)//2
            if(arr[mid]==target):
                return True
            elif(arr[mid]<target):
                low = mid+1
            else:
                high = mid-1
        return False
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m = len(matrix)
        n = len(matrix[0])
        rl = 0
        rh = m-1
        while(rl<=rh):
            rm = (rl+rh)//2
            if(matrix[rm][n-1]<target):
                rl = rm+1
            else:
                rh = rm-1
         #rl will have my required row
        if(rl<0 or rl>=m):
            return False
        if(self.binSearch(matrix[rl],0,n-1,target)):
            return True
        return False 
        
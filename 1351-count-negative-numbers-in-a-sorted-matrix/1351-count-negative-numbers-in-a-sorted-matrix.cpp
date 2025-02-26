class Solution {
public:
    int bin(vector<int> &arr, int low,int high){
        int c =0;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]>=0) low=mid+1;
            else high = mid-1;
        }
        return arr.size()-low;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count=0;
        //row-wise
        int low = 0;
        int high = m-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(grid[mid][0]>=0) low = mid+1;
            else
                high = mid-1;
        }
        int nrows = m-low;
        count+=nrows*n;
        for(int i=0;i<low;i++){
            count+=bin(grid[i],0,n-1);
        }
        return count;
    
    }
};

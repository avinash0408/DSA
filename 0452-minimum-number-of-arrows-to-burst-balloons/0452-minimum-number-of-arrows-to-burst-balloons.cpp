class Solution {
public:
    static bool compare(vector<int> a,vector<int>b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
       sort(points.begin(),points.end(),compare);
       int n = points.size();
        int count=1;
        int res = points[0][1];
        for(int i=1;i<n;i++){
            if(points[i][0]<=res){
                continue;
            }else{
                count++;
                res = points[i][1];
            }
        }
        return count;
    }  
};

// 1 10
// 3 9
// 4 11
// 6 7
// 6 9
// 8 12
// 9 12
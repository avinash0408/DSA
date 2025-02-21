class Solution {
public:
    int hIndex(vector<int>& citations) {
        int h=0;
        int n = citations.size();
        sort(citations.begin(),citations.end(),greater<int>());
        // for(int i=0;i<n;i++){
        //     if(citations[i]>i){
        //         h++;
        //     }
        // }
        int l = 0;
        int r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(citations[mid]>mid){
                h=mid+1;
                l=mid+1;
            }else{
                r = mid-1;
            }
        }
        return h;
    }
};

//0 1 3 6 5
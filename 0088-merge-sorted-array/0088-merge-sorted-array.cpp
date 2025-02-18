class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int fl = m-1;
     int sl = n-1;
     int ol = m+n-1;
     while(fl>=0 && sl>=0){
        if(nums1[fl]<nums2[sl]){
            nums1[ol] = nums2[sl];
            sl--;
        }
        else{
            nums1[ol] = nums1[fl];
            fl--;
        }
        ol--;
     }
     while(sl>=0){
        nums1[ol]=nums2[sl];
        sl--;
        ol--;
     }
    }
};
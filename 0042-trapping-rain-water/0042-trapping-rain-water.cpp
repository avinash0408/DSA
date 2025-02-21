class Solution {
public:
    
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> rightmax(n);
        vector<int> leftmax;
        leftmax.push_back(height[0]);
        for(int i=1;i<n;i++){
            leftmax.push_back(max(leftmax[i-1],height[i]));
        }
        rightmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
            rightmax[i] = max(height[i],rightmax[i+1]);
        int s = 0;
        for(int i=0;i<n;i++){
            s+=min(rightmax[i],leftmax[i])-height[i];
        }
        return s;
    }
};
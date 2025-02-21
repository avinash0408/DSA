class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int n = height.size();
        for(int i=0,j=n-1;i<j;){
            int h = (height[i]>height[j])?height[j]:height[i];
            int area = abs((i-j)*h);
            if(height[i]<height[j])
                i++;
            else j--;
            if(area>maxArea) maxArea=area;
        }
        return maxArea;
    }
};
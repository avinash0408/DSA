class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int n = numbers.size();
       int i=0;
       int j=n-1;
       while(i<j){
        int cSum = numbers[i]+numbers[j];
        if(cSum==target) return vector<int> {i+1,j+1};
        if(cSum<target) i++;
        else j--;
       }
       return vector<int>{};
    }
    
};
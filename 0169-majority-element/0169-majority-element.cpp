class Solution {
public:
  int majorityElement(vector<int> &nums) {
    int majorElem = nums[0];
    int count=1;
    for(int i=1;i<nums.size();i++){
        if(count ==0) {
            majorElem = nums[i];
            count=1;
            continue;
        }
        if(nums[i]==majorElem) count++;
        else if(nums[i]!=majorElem) count--;

    }
    return majorElem;
  }
};
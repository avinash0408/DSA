class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0;
        int r = letters.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(letters[mid]<=target)
                l=mid+1;
            else
                r=mid-1;
        }
        if(l>=0 && l<letters.size()) return letters[l];
        return letters[0];
    }
};


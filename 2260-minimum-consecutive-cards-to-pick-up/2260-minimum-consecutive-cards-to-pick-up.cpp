class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int n = cards.size();
        int r = 1;
        int l= 0;
        unordered_map<int,int> map;
        map[cards[0]]=1;
        int mini = 1e6;
        while(r<n){
            map[cards[r]]++;
            if(map[cards[r]]==2){
                mini = min(mini,r-l+1);
                map[cards[l]]--;
                l++;
            }
            r++;
        }
        return mini==1e6?-1:mini;
    }
};
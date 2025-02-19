class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int n = cards.size();
        int l = 0;
        int r = 1;
        if(cards[l]==cards[r]) return 2;
        unordered_map<int,int> map;
        map[cards[l]]=l;
        int mini = 1e6;
        while(r<n){
            if(map.find(cards[r])!=map.end()){
                int cons = r-map[cards[r]]+1;
                mini = min(mini,cons);
            }
            map[cards[r]] = r;
            r++;
        }
        return mini==1e6?-1:mini;
    }
};
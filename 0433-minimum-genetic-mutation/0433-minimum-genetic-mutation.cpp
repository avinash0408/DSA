class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        unordered_set<string> st(bank.begin(),bank.end());
        if (!st.count(endGene)) return -1;
        queue<string> q;
        q.push(startGene);
        string choice = "ACGT";
        int count =0;
        if(st.count(startGene)) st.erase(startGene);
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                string top = q.front();
                q.pop();
                if(top==endGene) return count;
                for(int i=0;i<8;i++){
                    char og = top[i];
                    for(char c:choice){
                        top[i]=c;
                        if(st.count(top)){
                            q.push(top);
                            st.erase(top);
                        }
                    }
                    top[i]=og;
                }
            }
            count++;
        }
        return -1;
    }
};

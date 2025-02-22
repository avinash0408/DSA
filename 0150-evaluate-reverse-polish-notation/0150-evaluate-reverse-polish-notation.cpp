class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        int res = 0;
        stack<int> st;
        for(string s:tokens){
            if(s=="+" || s=="-"||s=="*"||s=="/"){
                int sec = st.top();
                st.pop();
                int fir = st.top();
                st.pop();
                if(s=="+") st.push(fir+sec);
                else if(s=="-") st.push(fir-sec);
                else if(s=="*") st.push(fir*sec);
                else if(s=="/") st.push(fir/sec);
            }else{
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};
class Solution {
public:
    string simplifyPath(string path) {
        string res="";
        string tmp="";
        int n = path.size();
        int i=1;
        stack<string> st;
        while(i<n){
            if(path[i]=='/'){
                if(tmp==".." && !st.empty()){
                    st.pop();
                }else if(tmp!="" && tmp!="." && tmp!="/" && tmp!=".."){
                    st.push(tmp);
                }
                tmp="";
            }else{
                tmp+=path[i];
            }
            i++;
        }
        if(tmp==".." && !st.empty())
                st.pop();
        else if(tmp!="" && tmp!="." && tmp!="/" && tmp!="..") st.push(tmp);
        if(st.empty())return "/";
        stack<string> rev;
        while(!st.empty()){
            rev.push(st.top());
            st.pop();
        }
        while(!rev.empty()){
            res+="/"+rev.top();
            rev.pop();
        }
        return res;
    }
};


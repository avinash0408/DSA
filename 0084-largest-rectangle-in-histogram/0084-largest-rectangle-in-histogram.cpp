class Solution {
public:
    vector<int> nse(vector<int> arr,int n){
        vector<int> res(n);
        stack<int> st;
        for(int j=n-1;j>=0;j--){
            while(!st.empty() && arr[st.top()]>=arr[j])
                st.pop();
            res[j] = st.empty()?n:st.top();
            st.push(j);
        }
        return res;
    }

    vector<int> pse(vector<int> arr,int n){
        vector<int> res;
        stack<int> st;
        for(int j=0;j<n;j++){
            while(!st.empty() && arr[st.top()]>=arr[j])
                st.pop();
            res.push_back(st.empty()?-1:st.top());
            st.push(j);
        }
        return res;
    }
    
    int largestRectangleArea(vector<int>& heights) {
       int maxA = 0;
       int n = heights.size();
       vector<int> nsA = nse(heights,n);
       vector<int> psA = pse(heights,n);
       for(int i=0;i<n;i++){
        maxA = max(maxA,heights[i]*(nsA[i]-psA[i]-1));
       }
       return maxA;
    }
};
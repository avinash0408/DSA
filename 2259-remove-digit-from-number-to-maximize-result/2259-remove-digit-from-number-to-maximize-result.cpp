class Solution {
public:
    string removeDigit(string number, char digit) {
        string maxi="0";
        int n = number.size();
        for(int i=0;i<n;i++){
            if(number[i]==digit){
                string tmp=number;
                tmp.erase(tmp.begin()+i);
                if(tmp>maxi) maxi = tmp;
            }
        }
        return maxi;
    }
};
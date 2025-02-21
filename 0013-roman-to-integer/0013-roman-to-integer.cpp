class Solution {
public:
    int romanToInt(string s) {
        int p=0,i=0;int carry =0;
        for(char x :s){
                if(x=='M') p=p+1000;
                else if(x=='D') p=p+500;
                else if(x=='C'){
                    if(i<s.length()-1 && (s[i+1]=='D' || s[i+1]=='M')){
                        carry = carry+100;
                    }
                    else p=p+100;
                }
                else if(x=='L') p=p+50;
                else if(x=='X'){
                    if(i<s.length()-1 && (s[i+1]=='L' || s[i+1]=='C')){
                        carry = carry+10;
                    }
                    else p=p+10;
                }
                else if(x=='V') p=p+5;
                else if(x=='I'){
                    if(i<s.length()-1 && (s[i+1]=='V' || s[i+1]=='X')){
                        carry = carry+1;
                    }
                    else p=p+1;
                }
            i++;
        }
        return p-carry;
    }
};
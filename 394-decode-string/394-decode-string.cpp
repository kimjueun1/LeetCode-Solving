class Solution {
public:
    string decodeString(string s) {
        int i=0;
        return code(s, i);
    }
    string code(string &s, int &i){
        string res;
        while(i<s.size() && s[i] !=']'){
            if(isdigit(s[i])){
                int num=0;
                while(i<s.size() && isdigit(s[i])){
                    num = num*10 + s[i++]-'0';
                }
                i++;
                string str = code(s, i);
                while(num--){
                    res += str;
                }
                i++;
            }
            else {
                res += s[i++];
            }
        }
        return res;
    }

};
class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return solve(s, i);
    }
    
    string solve(string& s, int &i) {
        
        string ans;
        while(i<s.size() && s[i] != ']') {
            if(isdigit(s[i])) {
                int k=0;
                while(i<s.size() && isdigit(s[i])) {
                    k = k*10 + s[i++]-'0';
                }
                i++;
                string temp = solve(s, i);
                while(k--) {
                    ans += temp;
                }
                i++;
            } else {
                ans += s[i++];
            }
        }
        return ans;
    }
    
};
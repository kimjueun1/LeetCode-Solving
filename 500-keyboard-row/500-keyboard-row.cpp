class Solution {
public:
    unordered_map<char, int> m;
    vector<string> findWords(vector<string>& words) {
        string fw0 = "qwertyuiop";
        string fw1 = "asdfghjkl";
        string fw2 = "zxcvbnm";
        
        for(char c : fw0) m[c] = 0;
        for(char c : fw1) m[c] = 1;
        for(char c : fw2) m[c] = 2;
        
        vector<string> ans;
        for(const auto& w : words){
            int line = m[tolower(w[0])];
            bool flag = false;
            for(int i=0; i<w.size(); i++){
                if(m[tolower(w[i])] != line){
                    flag=true;
                    break;
                }                
            }
            if(flag) continue;
            ans.push_back(w);
        }
        return ans;
    }
};
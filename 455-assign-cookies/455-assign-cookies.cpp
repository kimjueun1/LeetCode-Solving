class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int content = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int find = 0;
        for (int i = 0; i < s.size(); i++) {
            for (int j = find; j < g.size(); j++) {
                if(s[i] >= g[j]){
                    content++;
                    find = j + 1;
                    break;
                }
            }
        } return content;
    }
};
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> s;
        for(auto x : emails){
            string mail = "";
            for(auto w : x){
                if(w=='+' || w=='@') break;
                if(w=='.') continue;
                mail += w;
            }
            mail+=x.substr(x.find('@'));
            s.insert(mail);
        }
        return s.size();
    }
};
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        for(int i=0; i<paths.size(); i++){
            string dest=paths[i][1];
            bool is_dest=false;
            for(int j=0; j<paths.size(); j++){
                if(paths[j][0]==dest) is_dest=true;
            }
            if(!is_dest) return dest;
        }
        return "";
    }
};
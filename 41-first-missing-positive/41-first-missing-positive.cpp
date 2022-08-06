class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        int i; 
        for(i=0; i<nums.size(); i++) s.insert(nums[i]);
        for(i=1; i<=s.size(); i++){
            if(s.find(i) != s.end()) continue;
            else return i;
        }
        return i;
    }
};
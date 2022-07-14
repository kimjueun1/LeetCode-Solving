class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int find=-1;
        for(int i=0; i<nums.size()-1; i+=2){
            if(nums[i]!=nums[i+1]) {
                find=i;
                break;
            }
        }
        if(find==-1) find=nums.size()-1;
        return nums[find];
    }
};
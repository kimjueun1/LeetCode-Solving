class Solution {
public:
   int rob(vector<int>& nums) {
       if(nums.empty()) return 0;
       vector<int> dp(nums.size()+1, 0);
       dp[1] = nums[0];
       for(int i=2; i<nums.size()+1; i++)
           dp[i] = max(dp[i-2]+nums[i-1], dp[i-1]);
       return dp[nums.size()];
    }
};
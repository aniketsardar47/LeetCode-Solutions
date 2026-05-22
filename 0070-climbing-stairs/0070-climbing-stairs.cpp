class Solution {
public:
    int solve(int i,int n,vector<int>& dp){
       if(i==n) return 1;
       if(i>n) return 0;

       if(dp[i] != -1) return dp[i]; 
       int climbs = solve(i+1,n,dp);
       climbs += solve(i+2,n,dp);
       dp[i] = climbs;
        return climbs;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solve(0,n,dp);
    }
};
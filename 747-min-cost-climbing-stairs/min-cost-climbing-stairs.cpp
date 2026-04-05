class Solution {
public:
    int func(int i,int n,vector<int>&cost,vector<int>&dp)
    {
        if(i==0||i==1)
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        int step1=cost[i-1]+func(i-1,n,cost,dp);
        int step2=cost[i-2]+func(i-2,n,cost,dp);
        return dp[i]=min(step1,step2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
      int n=cost.size();
      vector<int>dp(n+1,-1);
      return func(n,n,cost,dp);
    }
};
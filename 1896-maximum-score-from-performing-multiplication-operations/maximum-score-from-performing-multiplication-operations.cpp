class Solution {
public:
    int score(int op,int l,int n, vector<vector<int>>&dp,vector<int>& nums, vector<int>& multi)
    {
        if(op==multi.size())
        return 0;
        if(dp[op][l]!=INT_MIN)
        return dp[op][l];

        int left=nums[l]*multi[op]+score(op+1,l+1,n,dp,nums,multi);
        int right=nums[n-1-(op-l)]*multi[op]+score(op+1,l,n,dp,nums,multi);

        return dp[op][l]= max(left,right);
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n=nums.size();
        int m=multipliers.size();
        vector<vector<int>>dp(m+1,vector<int>(m+1,INT_MIN));

     return score(0,0,n,dp,nums,multipliers);   
    }
};
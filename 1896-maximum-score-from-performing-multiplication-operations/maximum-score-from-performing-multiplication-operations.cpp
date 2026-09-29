class Solution {
public:
    int score(int op,int l,int n,int m,  vector<vector<int>>&dp,vector<int>& nums, vector<int>& multi)
    {
        for(int i=0;i<=m;i++)
        {
            dp[m][i]=0;
        }
        for(int i=m-1;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                int left=nums[j]*multi[i]+dp[i+1][j+1];
                int r=n-1-(i-j);
                int right=nums[r]*multi[i]+dp[i+1][j];
                dp[i][j]=max(left,right);
            }
        }
        return dp[0][0];
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n=nums.size();
        int m=multipliers.size();
        vector<vector<int>>dp(m+1,vector<int>(m+1));

     return score(0,0,n,m,dp,nums,multipliers);   
    }
};
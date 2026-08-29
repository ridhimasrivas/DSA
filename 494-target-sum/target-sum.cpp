class Solution {
public:
    int subsetsum(vector<int>&nums,vector<vector<int>>&dp,int targetsum)
    {
        dp[0][0]=1;
        for(int i=1;i<=nums.size();i++)
        {
            for(int j=0;j<=targetsum;j++)
            {
                if(nums[i-1]<=j)
                dp[i][j]=dp[i-1][j-nums[i-1]] +dp[i-1][j];
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        return dp[nums.size()][targetsum];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum<abs(target))
        return 0;
        if((sum+target)%2!=0)
        return 0;
        int targetsum=(target+sum)/2;
        vector<vector<int>>dp(n+1,(vector<int>(targetsum+1)));
        int ans= subsetsum(nums,dp,targetsum);
        return ans;

    }
};
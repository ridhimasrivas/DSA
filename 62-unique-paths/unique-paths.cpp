class Solution {
public:
    // int calculate(int i,int j,vector<vector<int>>&dp) //memoization
    // {
    //     if(i==0 && j==0)
    //     return 1;
    //     if(i<0||j<0)
    //     return 0;
    //     if(dp[i][j]!=-1)
    //     {
    //         return dp[i][j];
    //     }
    //     int up=calculate(i-1,j,dp);
    //     int left =calculate(i,j-1,dp);
    //     return dp[i][j]=up+left;
    // }

    int calculate(int m, int n, vector<vector<int>>& dp) {
        for (int i = 0; i <= m; i++) // because func mein m-1 pass kiya hai
        {
            for (int j = 0; j <= n; j++) {
                if (i == 0 && j == 0) {
                    dp[i][j] = 1;
                    continue;
                }
                int up = 0;
                int left = 0;
                if (i > 0)
                    up = dp[i - 1][j];
                if (j > 0)
                    left = dp[i][j - 1];
                dp[i][j] = up + left;
            }
        }
        return dp[m][n]; // same as above reason otherwise it should [m-1][n-1]
                         // for last element
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return calculate(m - 1, n - 1, dp);
    }
};
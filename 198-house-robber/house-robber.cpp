class Solution {
public:
    int solve(int i, vector<int>& nums,vector<int>&memo) {
        if (i == 0)
            return nums[0];
        if (i < 0)
            return 0;
        if(memo[i]!=-1)
        return memo[i];
        int handle = nums[i] + solve(i - 2, nums,memo);
        int not_handle = +solve(i - 1, nums,memo);
        return memo[i]=max(handle, not_handle);
    }

public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>memo(n+1,-1);
        return  solve(n - 1, nums,memo);
    }
};
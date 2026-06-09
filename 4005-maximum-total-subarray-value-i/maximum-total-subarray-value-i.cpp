class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        long long val=maxi-mini;
        return k*val;
    }
};
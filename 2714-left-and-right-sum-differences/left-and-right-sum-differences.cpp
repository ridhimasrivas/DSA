class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;
        int n= nums.size();
        vector<int>rightsum(n);
        vector<int>leftsum(n,0);
        leftsum[0]=0;
        for(int i=1;i<n;i++)
        {
            leftsum[i]= leftsum[i-1]+nums[i-1];
        }
        
        
        for(int i=n-2;i>=0;i--)
        {
            rightsum[i]= rightsum[i+1]+nums[i+1];
        }
       
        for(int i=0;i<n;i++)
        {
            ans.push_back( abs(leftsum[i]-rightsum[i]));
        }
        return ans;
    }
};
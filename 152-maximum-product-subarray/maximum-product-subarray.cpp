class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largestProduct=INT_MIN;
        int product=1;
        for(int i=0;i<nums.size();i++)
        {
            product*=nums[i];
            largestProduct=max(largestProduct,product);
            if(product==0)
            product=1;
        }
        //because if first element -ve then whole ans is -ve
        //hence traverse botth from l->r and r->l;
        product=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            product*=nums[i];
            largestProduct=max(largestProduct,product);
            if(product==0)
            product=1;
        }
        return largestProduct;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count=0;
       int element=-1;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==element)
        count++;
         else if(count==0 && nums[i]!=element)
        {
            element=nums[i];
            count++;
        }
        
        else
        count--;
       }
         int cnt1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == element) {
                cnt1++;
            }
        }
       if(cnt1>(nums.size())/2)
       return element;
       return -1;
    }
};
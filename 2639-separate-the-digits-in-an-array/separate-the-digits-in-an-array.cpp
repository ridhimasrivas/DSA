class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            vector<int> temp;
            while (n > 0) {

                int a = n % 10;
                temp.push_back(a);
                n /= 10;
            }
            reverse(temp.begin(), temp.end());
             ans.insert(ans.end(), temp.begin(), temp.end());
        }
       
        return ans;
    }
};
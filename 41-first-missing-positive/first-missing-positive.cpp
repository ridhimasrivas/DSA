class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int first = 1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                if (nums[i] == first)
                    first++;
            }
        }
        return first;
    }
};
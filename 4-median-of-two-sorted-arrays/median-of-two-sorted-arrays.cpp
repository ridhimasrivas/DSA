class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> merge;
        for (int i = 0; i < n; i++) {
            merge.push_back(nums1[i]);
        }
        for (int i = 0; i < m; i++) {
            merge.push_back(nums2[i]);
        }
        sort (merge.begin(),merge.end());
        int size=merge.size();
        if(size%2==0){
        double mid1=merge[size/2-1];
        double mid2=merge[size/2];
        return (mid1+mid2)/2.00;
        }
        else
        return merge[size/2];
    }
};
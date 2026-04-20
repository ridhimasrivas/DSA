class Solution {
public:
    int maxDistance(vector<int>& colors) {
       int max_dis=0;
       int n=colors.size();
       int i=0;
       int j=0;
       for(int i=0;i<n;i++)
       {
        for(int j=i;j<n;j++)
        {
            if(colors[i]!=colors[j])
            max_dis=max(max_dis,abs(i-j));
        }
       }
       return max_dis;
    }
};
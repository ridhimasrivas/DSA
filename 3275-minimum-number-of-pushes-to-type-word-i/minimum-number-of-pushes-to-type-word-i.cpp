class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            c+=i/8+1;
        }
        return c;

    }
};
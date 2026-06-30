class Solution {
public:
    int lengthOfLastWord(string s) {
        int n= s.size()-1;
        while(n>=0  &&s[n]==' ')
        {
            n--;
        }
        int x=n;
        while(x>=0 && s[x]!=' ')
        {
            x--;
        }
        return n-x;
    }
};
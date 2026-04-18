class Solution {
    private:
    int reverse(int x)
    {
        int rev=0;
        while(x!=0)
        {
            int a=x%10;
            rev=rev*10+a;
            x/=10;
        }
        cout<<rev;
        return rev;
    }
public:
    int mirrorDistance(int n) {
        int ans=abs(n-reverse(n));
        return ans;
    }
};
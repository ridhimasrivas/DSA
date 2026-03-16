class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor)
            return 1;
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if (divisor == 1)
            return dividend;
        int sign = (divisor < 0) ^ (dividend < 0) ? -1 : 1;
        long long divid = abs((long long)dividend);
        long long divis = abs((long long)divisor);
        int ans = 0;
        while (divid >= divis) {
            int p = 0;
            while (divid >= (divis << p))
                p++;
            p--;
            divid -= (divis << p);
            ans += (1 << p);
        }
        return sign * ans;
    }
};
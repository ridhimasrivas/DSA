 class Solution {
 public:
//     double myPow(double x, int n) {
//         if (n == 0) return 1.0; 
//         if (n == INT_MIN) { 
//             x = 1 / x;
//             n = INT_MAX;  
//         }
//         if (n < 0) {
//             x = 1 / x;
//             n = -n;  
//         }
        
//         double result = 1.0;
//         while (n > 0) {
//             if (n % 2 == 1) {  
//                 result *= x;
//             }
//             x *= x;  
//             n /= 2; 
//         }
//         return result;
//     }
// };
double myPow(double x, long long n) {
    if (n == 0) return 1.0;
    if (n < 0) return 1.0 / myPow(x, -n);
    double half = myPow(x, n / 2);
    if (n % 2 == 0) return half * half;
    else return half * half * x;
}
 };

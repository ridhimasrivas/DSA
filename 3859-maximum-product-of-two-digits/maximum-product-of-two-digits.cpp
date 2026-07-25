class Solution {
public:
    int maxProduct(int n) {
        int largest=-1;
        int second_largest=-1;
        while(n!=0)
        {
            int a=n%10;
            if(largest<=a)
            {
                second_largest=largest;
                largest=a;
            }
            else if(second_largest<a)
            {
                second_largest=a;
            }
            n/=10;
        }
        return largest*second_largest;
    }
};
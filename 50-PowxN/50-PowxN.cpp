// Last updated: 3/30/2026, 2:14:07 PM
class Solution {
private:
    double power(double x, long n){
        if(n==0) return 1.000000;
        if(n==1) return x;
        else{
            double ans = power(x,n/2);
            if(n%2==0) return ans*ans;
            else return x*ans*ans;
        }
    }
public:
    double myPow(double x, int n) {
        if(n>0) return power(x,n);
        else{
            long N = n;
            return (1/power(x,N));
        }
    }
};
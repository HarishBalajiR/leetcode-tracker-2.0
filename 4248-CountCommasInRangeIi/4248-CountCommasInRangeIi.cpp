// Last updated: 3/30/2026, 2:10:16 PM
class Solution {
public:
    long long countCommas(long long num) {
        string s = to_string(num);
        int n = s.size();
        if(n<=3) return 0;
        else{
            if(num < 1000000) return num - 999; // 10^6
            else if(num < 1000000000){
                long long c1 = num-999;// 1000 - 999999
                long long c2 = num-999999; //199235
                return c1+c2;//1,000,000 - 1,000,000,000
            }// 10^9
            else if(num < 1000000000000){
                long long c1 = num - 999;
                long long c2 = num - 999999;
                long long c3 = num - 999999999;
                return c1+c2+c3;
            }//10^12
            else if(num < 1000000000000000){
                long long c1 = num - 999;
                long long c2 = num - 999999;
                long long c3 = num - 999999999;
                long long c4 = num - 999999999999;
                return c1+c2+c3+c4;
            }//10^15
            else{
                long long c1 = num - 999;
                long long c2 = num - 999999;
                long long c3 = num - 999999999;
                long long c4 = num - 999999999999;
                long long c5 = num - 999999999999999;
                return c1+c2+c3+c4+c5;
            }//1e15
        }
        return 0;
    }
};

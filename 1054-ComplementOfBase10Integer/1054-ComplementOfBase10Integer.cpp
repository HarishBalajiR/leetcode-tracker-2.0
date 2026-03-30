// Last updated: 3/30/2026, 2:12:33 PM
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int result = 0, place = 0;
        while(n>0){
            int rem = n%2;
            if(rem==0){
                result+=pow(2,place);
            }
            place++;
            n/=2;
        }
        return result;
    }
};
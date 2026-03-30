// Last updated: 3/30/2026, 2:13:39 PM
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n!=0){
            int bin = n%2;
            if(bin==1) count++;
            n/=2;
        }
        return count;
    }
};
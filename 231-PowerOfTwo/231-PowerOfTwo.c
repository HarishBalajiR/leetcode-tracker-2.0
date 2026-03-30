// Last updated: 3/30/2026, 2:13:33 PM
bool isPowerOfTwo(int n) {
    if(n<=0) return 0;
    if((n&(n-1))==0) return true;
    else return false;
}
// Last updated: 3/30/2026, 2:12:41 PM
int fib(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else return fib(n-1) + fib(n-2);
}
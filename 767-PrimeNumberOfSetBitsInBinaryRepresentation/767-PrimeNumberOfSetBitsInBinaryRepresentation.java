// Last updated: 3/30/2026, 2:12:47 PM
class Solution {
    public int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int num = left ; num <= right ; num++){
            int bitcount = Integer.bitCount(num);
            if(isPrime(bitcount)==1) count++;
        }
        return count;
    }
    private int isPrime(int num){
        if(num<=1) return 0;
        if(num==2) return 1;
        int flag = 1;
        for(int i = 2 ; i <= Math.sqrt(num) ; i++){
            if(num%i==0) flag = 0;
        }
        return flag; 
    }
}
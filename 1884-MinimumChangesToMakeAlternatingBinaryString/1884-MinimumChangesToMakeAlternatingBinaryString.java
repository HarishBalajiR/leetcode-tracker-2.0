// Last updated: 3/30/2026, 2:11:58 PM
class Solution {
    public int minOperations(String s) {
        int opcount = 0;
        char[] arr = s.toCharArray();
        for(int index = 0 ; index < arr.length ; index++){
            if(arr[index]=='0' && index%2!=0) opcount++;
            if(arr[index]=='1' && index%2==0) opcount++;
        }
        return Math.min(opcount,s.length() - opcount);
    }
}
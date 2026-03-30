// Last updated: 3/30/2026, 2:11:47 PM
class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int result = 0;
        for(String str : operations){
            if(str.contains("-")) result--;
            else result++;
        }
        return result;
    }
}
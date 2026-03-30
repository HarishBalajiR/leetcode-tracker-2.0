// Last updated: 3/30/2026, 2:12:16 PM
class Solution {
    public char findKthBit(int n, int k) {
        String result = "0";
        for(int ctr = 1 ; ctr < n ; ctr++){
            String reversedtoggle = reverse_toggle(result);
            result += reversedtoggle;
        }
        return result.charAt(k-1);
    }
    private String reverse_toggle(String s){
        StringBuilder sb = new StringBuilder(s);
        for(int index = 0 ; index < sb.length() ; index++){
            if(sb.charAt(index)=='0') sb.setCharAt(index,'1');
            else if(sb.charAt(index)=='1') sb.setCharAt(index,'0');
        }
        return "1"+sb.reverse().toString();
    }
}
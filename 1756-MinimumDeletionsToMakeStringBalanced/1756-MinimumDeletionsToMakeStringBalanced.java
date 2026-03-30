// Last updated: 3/30/2026, 2:12:07 PM
class Solution {
    public int minimumDeletions(String s) {
        Stack<Character> stack = new Stack<>();
        int count = 0;
        char[] arr = s.toCharArray();
        for(int i = arr.length - 1 ; i >=0 ; i--){
            if(arr[i]=='b'){
                if(!stack.isEmpty() && stack.peek()=='a'){
                    stack.pop();
                    count++;
                }
                else stack.push(arr[i]);
            }
            else stack.push(arr[i]);
        }
        return count;
    }
}
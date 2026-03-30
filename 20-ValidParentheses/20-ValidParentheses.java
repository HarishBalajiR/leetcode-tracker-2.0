// Last updated: 3/30/2026, 2:14:35 PM
class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();
        for(char ch: s.toCharArray()){
            switch(ch){
                case '(' : 
                    stack.push(ch);
                    break;
                case '[' : 
                    stack.push(ch);
                    break;
                case '{':
                    stack.push(ch);
                    break;
                case ')':
                    if(!stack.isEmpty() && stack.peek()=='(') stack.pop();
                    else return false;
                    break;
                case ']':
                    if(!stack.isEmpty() && stack.peek()=='[') stack.pop();
                    else return false;
                    break;
                case '}':
                    if(!stack.isEmpty() && stack.peek()=='{') stack.pop();
                    else return false;
                    break;
                default:
                    return false;
            }
        }
        return stack.isEmpty();
    }
}
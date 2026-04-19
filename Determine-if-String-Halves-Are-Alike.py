1class Solution {
2    private boolean isvowel(char ch){
3        ch = Character.toLowerCase(ch);
4        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
5    }
6    public boolean halvesAreAlike(String s) {
7        int vcount = 0, N = s.length();
8        for(int index = 0 ; index < N ; index++){
9            if(index < N/2){
10                if(isvowel(s.charAt(index))) vcount++;
11            }
12            else{
13                if(isvowel(s.charAt(index))) vcount--;
14            }
15            
16        }
17        return vcount==0;
18    }
19}
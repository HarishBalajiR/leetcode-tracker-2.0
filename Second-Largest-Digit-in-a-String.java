1class Solution {
2    public int secondHighest(String s) {
3        ArrayList<Integer> digits = new ArrayList<>();
4        for(int index = 0 ; index < s.length() ; index++){
5            if(s.charAt(index)-'0' >=0 && s.charAt(index)-'0' <= 9){
6                digits.add(s.charAt(index)-'0');
7            }
8        }
9        Collections.sort(digits,Collections.reverseOrder());
10        if(digits.size()==0) return -1;
11        int target = digits.get(0);
12        for(int index = 1 ; index < digits.size() ; index++){
13            if(digits.get(index) != target) return digits.get(index);
14        }
15        return -1;
16    }
17}
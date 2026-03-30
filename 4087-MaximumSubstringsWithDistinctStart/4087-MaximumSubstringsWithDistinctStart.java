// Last updated: 3/30/2026, 2:10:47 PM
class Solution {
    public int maxDistinct(String s) {
        Set<Character> set = new HashSet<>();
        for(char ch : s.toCharArray()) set.add(ch);
        return set.size();
    }
}
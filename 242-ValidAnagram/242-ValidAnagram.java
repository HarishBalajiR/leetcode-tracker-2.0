// Last updated: 3/30/2026, 2:13:37 PM
class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character,Integer> map = new HashMap<>();
        for(char ch: s.toCharArray()) map.put(ch,map.getOrDefault(ch,0)+1);
        for(char ch: t.toCharArray()) map.put(ch,map.getOrDefault(ch,0)-1);
        for(int value : map.values()){
            if(value!=0) return false;
        }
        return true;
    }
}
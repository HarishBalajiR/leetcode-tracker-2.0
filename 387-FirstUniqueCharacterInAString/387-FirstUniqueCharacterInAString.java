// Last updated: 3/30/2026, 2:13:16 PM
class Solution {
    public int firstUniqChar(String s) {
        LinkedHashMap<Character,Integer> map = new LinkedHashMap<>();
        for(char ch : s.toCharArray()) map.put(ch,map.getOrDefault(ch,0)+1);
        for(Character key : map.keySet()){
            if(map.get(key)==1) return s.indexOf(key); 
        }
        return -1;
    }
}
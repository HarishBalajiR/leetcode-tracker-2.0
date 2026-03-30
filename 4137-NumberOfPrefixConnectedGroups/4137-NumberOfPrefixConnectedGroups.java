// Last updated: 3/30/2026, 2:10:43 PM
class Solution {
    public int prefixConnected(String[] words, int k) {
        HashMap<String, Integer> freq = new HashMap<>();
        int count = 0;
        for (String word : words) {
            if(word.length()>=k){
                String prefix = word.substring(0,k);
                freq.put(prefix, freq.getOrDefault(prefix, 0) + 1);
            }
        }
        for (int var : freq.values()) {
            if (var >= 2)
                count++;
        }
        return count;
    }
}
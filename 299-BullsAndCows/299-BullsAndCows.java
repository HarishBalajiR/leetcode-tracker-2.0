// Last updated: 3/30/2026, 2:13:27 PM
class Solution {
    public String getHint(String secret, String guess) {
        HashMap<Character,Integer> secretmap = new HashMap<>();
        HashMap<Character,Integer> guessmap = new HashMap<>();
        char[] secretarr = secret.toCharArray();
        char[] guessarr = guess.toCharArray();
        for(char ch : secretarr) secretmap.put(ch, secretmap.getOrDefault(ch,0)+1);
        for(char ch : guessarr) guessmap.put(ch, guessmap.getOrDefault(ch,0)+1);

        int bulls = 0;
        int common = 0;
        for(int i = 0 ; i < secret.length() ; i++){
            if(secretarr[i]==guessarr[i]) bulls++;
        }
        for(char ch : secretmap.keySet()){
            if(guessmap.containsKey(ch)) common+=Math.min(secretmap.get(ch),guessmap.get(ch));
        }
        System.out.println(common - bulls);
        return ""+bulls+"A"+(common-bulls)+"B";
    }
}
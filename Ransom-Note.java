1/*
2This solution is inspired from the 0ms club.
3If you use maps you cant compare the values directly
4so we use frequency arrays.
5now if the count of a character in ransom is higher than magazine it cant be created.
6so we return false;
7else return ture;
8*/
9class Solution {
10    public boolean canConstruct(String ransomNote, String magazine) {
11        int[] ransomfreq = new int[26];
12        int[] magafreq = new int[26];
13        for(char ch : ransomNote.toCharArray()) ransomfreq[ch-'a']++;
14        for(char ch : magazine.toCharArray()) magafreq[ch-'a']++;
15        for(int index = 0 ; index < 26 ; index++){
16            if(magafreq[index] < ransomfreq[index]) return false;
17        }
18        return true;
19    }
20}
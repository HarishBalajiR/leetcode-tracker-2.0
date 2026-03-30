// Last updated: 3/30/2026, 2:13:06 PM
class Solution {
    public List<String> readBinaryWatch(int turnedOn) {
        List<String> arr = new ArrayList<>();
        for(int hours = 0 ; hours < 12 ; hours++)
        {
            for(int minutes = 0 ; minutes < 60 ; minutes++)
            {
                String s = "";
                if(Integer.bitCount(hours)+Integer.bitCount(minutes)==turnedOn)
                {
                    if(minutes<10) arr.add(hours+":0"+minutes);
                    else arr.add(hours+":"+minutes);
                }
            }
        }
        return arr;
    }
}
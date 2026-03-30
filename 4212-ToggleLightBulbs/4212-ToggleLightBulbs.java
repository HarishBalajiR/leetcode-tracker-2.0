// Last updated: 3/30/2026, 2:10:46 PM
class Solution {
    public List<Integer> toggleLightBulbs(List<Integer> bulbs) {
        HashMap<Integer,Integer> countarr = new HashMap<>();
        ArrayList<Integer> values = new ArrayList<Integer>();
        for(int bulb: bulbs)
        {
            countarr.put(bulb,countarr.getOrDefault(bulb,0)+1);    
        }
        for(int key: countarr.keySet())
        {
            if(countarr.get(key)%2!=0) values.add(key);
        }
        Collections.sort(values);
        return values;
    }
}
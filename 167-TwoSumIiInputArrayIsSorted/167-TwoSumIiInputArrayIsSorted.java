// Last updated: 3/30/2026, 2:13:46 PM
class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int[] result = new int[2];
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int index = 0 ; index < numbers.length ; index++){
            int diff = target - numbers[index];
            if(map.containsKey(diff)){
                result[0] = map.get(diff)+1;
                result[1] = index+1;
            }
            map.put(numbers[index],index);
        }
        return result;
    }
}
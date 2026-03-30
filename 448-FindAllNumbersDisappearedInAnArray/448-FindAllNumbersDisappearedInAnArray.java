// Last updated: 3/30/2026, 2:13:01 PM
class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        HashSet<Integer> current = new HashSet<>();
        ArrayList<Integer> gone = new ArrayList<>();
        for(int num : nums)
        {
            current.add(num);
        }
        for(int i = 1 ; i <= nums.length ; i++)
        {
            if(!current.contains(i)) gone.add(i);
        }
        return gone;
    }
}
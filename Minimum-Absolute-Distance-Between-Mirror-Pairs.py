1class Solution {
2    private int rev(int num){
3        int result = 0;
4        while(num!=0){
5            result = result*10 + num%10;
6            num/=10;
7        }
8        return result;
9    }
10    public int minMirrorPairDistance(int[] nums) {
11        int mindist = Integer.MAX_VALUE;
12        HashMap<Integer,Integer> map = new HashMap<>();
13        for(int index = 0 ; index < nums.length ; index++){
14            if(map.containsKey(nums[index])){
15                mindist = Math.min(mindist,Math.abs(map.get(nums[index]) - index));
16            }
17            map.put(rev(nums[index]),index);
18        }
19        return (mindist!=Integer.MAX_VALUE ? mindist : -1);
20    }
21}
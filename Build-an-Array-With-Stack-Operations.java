1/*
2[1,3]
3idx = 0
4target[0] == 1 -> Push
5idx = 1
6target[1] != 2 -> Push and Pop
7idx = 1 (No change)
8target[1] == 3 -> Push
9idx = 2 (break)
10*/
11class Solution {
12    public List<String> buildArray(int[] target, int n) {
13        List<String> ans = new ArrayList<>();
14        int idx = 0;
15        for(int num = 1 ; num <= n ; num++){
16            if(idx==target.length) break;
17            if(target[idx]==num){
18                ans.add("Push");
19                idx++;
20            }
21            else{
22                ans.add("Push");
23                ans.add("Pop");
24            }
25        }
26        return ans;
27    }
28}
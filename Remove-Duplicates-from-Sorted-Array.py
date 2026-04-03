1'''
2Two Pointer Basics.
3slow -> Tracks unique elements
4fast -> Traverses thru the array.
5if nums[slow]!=nums[fast] -> we found our new element
6so we push slow by 1 and replace that index with nums[fast]
7now the number of unique elements = index of slow + 1
8as slow is now at the last unique element of the array
9'''
10class Solution:
11    def removeDuplicates(self, nums: List[int]) -> int:
12        slow,fast = 0,1
13        while(fast < len(nums)):
14            if(nums[slow]!=nums[fast]):
15                slow+=1
16                nums[slow] = nums[fast]
17            fast+=1
18        return slow+1
// Last updated: 3/30/2026, 2:10:27 PM
class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> hashmap;
        for(int num : nums) hashmap[num]+=1;
        for(int num : nums){
            if(hashmap.find(num) != hashmap.end()){
                if(num%2==0 && hashmap[num]==1) return num;
            }
        }
        return -1;
    }
};
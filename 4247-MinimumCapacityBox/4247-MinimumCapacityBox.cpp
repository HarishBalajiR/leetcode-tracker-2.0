// Last updated: 3/30/2026, 2:10:28 PM
class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        map<int,int> hashmap;
        for(int index = 0 ; index < capacity.size() ; index++){
            if(hashmap.find(capacity[index]) != hashmap.end()) continue; 
            hashmap[capacity[index]] = index;
        }
        for(auto val : hashmap){
            if(val.first >= itemSize) return val.second;
        }
        return -1;
    }
};
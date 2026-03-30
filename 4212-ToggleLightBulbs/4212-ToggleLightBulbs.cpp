// Last updated: 3/30/2026, 2:10:40 PM
class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        set<int> uniquebulbs;
        unordered_map<int,int> hashmap;
        for(int bulb : bulbs) hashmap[bulb]++;
        for(int bulb : bulbs) if(hashmap[bulb]%2!=0) uniquebulbs.insert(bulb);
        vector<int> result(uniquebulbs.begin(),uniquebulbs.end());
        sort(result.begin(),result.end());
        return result;
    }
};
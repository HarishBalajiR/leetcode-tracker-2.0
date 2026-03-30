// Last updated: 3/30/2026, 2:10:58 PM
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> result;
        unordered_map<int,int> hashmap;
        int N = order.size(), F = friends.size();
        for(int index = 0 ; index < N ; index++){
            if(find(friends.begin(),friends.end(),order[index]) != friends.end()) result.push_back(order[index]);
        }
        return result;
    }
};
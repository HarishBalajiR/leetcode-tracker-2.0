// Last updated: 3/30/2026, 2:13:19 PM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        for(int num : nums1) s1.insert(num);
        vector<int> result;
        for(int num : nums2){
            if(s1.contains(num)){
                result.push_back(num);
                s1.erase(num);
            }
        }
        return result;
    }
};
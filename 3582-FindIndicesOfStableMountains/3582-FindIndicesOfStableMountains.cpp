// Last updated: 3/30/2026, 2:11:01 PM
class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> result;
        int n = height.size();
        for(int index = 1 ; index < n ; index++){
            if(height[index-1]>threshold) result.push_back(index);
        }
        return result;
    }
};
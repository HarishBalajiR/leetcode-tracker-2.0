// Last updated: 3/30/2026, 2:14:18 PM
class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> lefth, righth;
        int maxheight = -1;
        for(int currheight : height){
            if(currheight>=maxheight) maxheight = max(maxheight,currheight);
            lefth.push_back(maxheight);
        }      
        maxheight = -1;
        reverse(height.begin(),height.end());
        for(int currheight : height){
            if(currheight>=maxheight) maxheight = max(maxheight,currheight);
            righth.push_back(maxheight);
        }
        reverse(height.begin(),height.end());
        reverse(righth.begin(),righth.end());
        int watercount = 0;
        int result = 0;
        for(int index = 0 ; index < height.size() ; index++){
            int minheight = min(lefth[index],righth[index]);
            watercount += minheight - height[index];
            
        }
        return watercount;
    }
};
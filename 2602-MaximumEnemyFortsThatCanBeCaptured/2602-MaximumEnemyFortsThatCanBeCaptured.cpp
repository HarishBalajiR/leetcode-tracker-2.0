// Last updated: 3/30/2026, 2:11:29 PM
class Solution {
public:
    int captureForts(vector<int>& forts) {
        int currcount = 0, maxcount = 0;
        int left = 0;
        int n = forts.size();
        while(left < n && forts[left] == 0) left++;
        int right = left + 1;
        while(right < n){
            if(forts[left]==1 && forts[right]== -1 || forts[left] == -1 && forts[right]==1){
                left = right;
                maxcount = max(maxcount,currcount);
                currcount = 0;
            }
            else if(forts[left] == 1 && forts[right] == 1 || forts[left] == - 1 && forts[right] == -1){
                left = right;
                currcount = 0;
            }
            else if(forts[right] == 0) currcount++;
            right++;
            //cout << currcount << " " << maxcount << endl;
        }
        return maxcount;
    }
};
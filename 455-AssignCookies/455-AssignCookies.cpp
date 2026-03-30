// Last updated: 3/30/2026, 2:13:08 PM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int gptr = 0, sptr = 0;
        //If our current cookie size >= our child's taste -> Add to count and increment both pointers
        int childcount = 0;
        while(gptr<g.size() && sptr<s.size()){
            if(s[sptr]>=g[gptr]){
                childcount++;
                gptr++;
            }
            sptr++;
        }
        return childcount;
    }
};
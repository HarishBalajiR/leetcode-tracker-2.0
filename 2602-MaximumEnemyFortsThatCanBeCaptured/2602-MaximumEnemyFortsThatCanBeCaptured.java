// Last updated: 3/30/2026, 2:11:34 PM
class Solution {
    public int captureForts(int[] forts) {
        int left = 0,count = 0;
        for(int right = 0 ; right < forts.length ; right++)
        {
            if(forts[right]!=0)
            {
                if((forts[left]==1 && forts[right]==-1) || (forts[left]==-1 && forts[right]==1))
                {
                    count = Math.max(count,right-left-1);
                }
                left = right;
            }
        }
        return count;
    }
}
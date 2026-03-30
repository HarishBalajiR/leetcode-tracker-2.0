// Last updated: 3/30/2026, 2:10:35 PM
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        vector<int> prefixGcd (n,0);
        prefixGcd[0] = nums[0];
        int runningmax = nums[0];
        for(int i = 1 ; i < n ; i++){
            runningmax = max(runningmax,nums[i]);
            prefixGcd[i] = gcd(nums[i],runningmax);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        //for(int i = 0 ; i < n ; i++) cout << prefixGcd[i] << endl;
        int left = 0, right = n - 1;
        while(left < right){
            sum+=gcd(prefixGcd[left],prefixGcd[right]);
            left++;
            right--;
        }
        return sum;
    }
};
// Last updated: 3/30/2026, 2:12:11 PM
class Solution {
private:
    string reverse_toggle(string result){
        for(int index = 0 ; index < result.size() ; index++){
            if(result[index]=='1') result[index]='0';
            else result[index]='1';
        }
        reverse(result.begin(),result.end());
        return "1"+result;
    }
public:
    char findKthBit(int n, int k) {
        string res = "0";
        for(int i = 1 ; i < n ; i++){
            res+=reverse_toggle(res);
        }
        cout << res << endl;
        return res[k-1];
    }
};

// s1 = 0
// s2 = 0 + 1 + rev(toggle(0)) -> 0 + 1 + rev(1) -> 011
// s3 = 011 + 1 + rev(toggle(011)) -> 011 + 1 + rev(100) -> 0111001
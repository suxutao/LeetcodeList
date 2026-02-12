#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    bool pan(){
        int dai=0;
        for (int i = 'a'; i <= 'z'; ++i) {
            if (v[i]){
                if (dai==0){
                    dai=v[i];
                }else if (dai!=v[i]){
                    return false;
                }
            }
        }
        return true;
    }
    int longestBalanced(string s) {
        int n=s.size(),ans=1;
        v.resize('z'+1);
        for (int i = 0; i < n; ++i) {
            fill(v.begin(), v.end(),0);
            for (int j = i; j < n; ++j) {
                v[s[j]]++;
                if (j-i+1>ans&&pan()){
                    ans=j-i+1;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().longestBalanced("zzabccy");
    return 0;
}
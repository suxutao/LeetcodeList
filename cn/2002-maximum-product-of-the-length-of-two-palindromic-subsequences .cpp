#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool hui(string&s){
        int l=0,r=s.size()-1;
        while (l<r){
            if (s[l]!=s[r])
                return false;
            ++l;--r;
        }
        return true;
    }
    int maxProduct(string s) {
        int n=s.size(),ans=0;
        vector<bool>dp(1<<n);
        for (int i = 1; i < 1 << n; ++i) {
            string temp;
            for (int j = 0; j < n; ++j) {
                if (i>>j&1)
                    temp.push_back(s[j]);
            }
            dp[i]=hui(temp);
        }
        for (int i = 1; i < 1 << n; ++i) {
            if (!dp[i])
                continue;
            for (int j = i+1; j < 1 << n; ++j) {
                if (dp[j]&&((i&j)==0)){
                    ans= max(ans,__builtin_popcount(i)*__builtin_popcount(j));
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().maxProduct("bb");
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumBeautifulSubstrings(string s) {
        int n=s.size();
        string str[]={"11110100001001","110000110101","1001110001","1111101","11001","101","1"};
        vector<int>dp(n+1,INT_MAX/2);
        dp[0]=0;
        for (int i = 1; i <= n; ++i) {
            if (s[i-1]=='1'){
                for (auto &j: str){
                    if (i>=j.size()&&s.substr(i-j.size(),j.size())==j){
                        dp[i]= min(dp[i],dp[i-j.size()]+1);
                    }
                }
            }
        }
        return dp[n]==INT_MAX/2?-1:dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().minimumBeautifulSubstrings("1");
    return 0;
}
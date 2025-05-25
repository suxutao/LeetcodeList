#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSubstrings(string word) {
        int n=word.size();
        vector<int>dp(n);
        vector<deque<int>>p(26);
        for (int i = 0; i < n; ++i) {
            int s=word[i]-'a';
            if (i)
                dp[i]=dp[i-1];
            while (p[s].size()>3){
                p[s].pop_front();
            }
            for (int j : p[s]) {
                if (i-j>=3){
                    if (j)
                        dp[i]= max(dp[i],1+dp[j-1]);
                    else
                        dp[i]= max(dp[i],1);
                }
            }
            p[s].push_back(i);
        }
        return dp[n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().maxSubstrings("abcceaddba");
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        unordered_map<char,int>m;
        vector<int>dp(s.size()+1);
        int ans=0;
        for (char i = 'a'; i <= 'z'; ++i) {
            m[i]=i-'a'+1;
        }
        for (int i = 0; i < chars.size(); ++i) {
            m[chars[i]]=vals[i];
        }
        for (int i = 1; i <= s.size(); ++i) {
            dp[i]= max(0,dp[i-1]+m[s[i-1]]);
            ans= max(ans,dp[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
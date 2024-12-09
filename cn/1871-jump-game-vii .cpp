#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        if (s.back()=='1')
            return false;
        int n=s.size();
        vector<int>pre(n+1);
        vector<bool>dp(n);
        dp[0]=1;pre[1]=1;
        for (int i = 1; i < n; ++i) {
            if (s[i]=='0'&&i>=minJump-1){
                if (pre[i-minJump+1]!=pre[max(0,i-maxJump)])
                    dp[i]=1;
            }
            pre[i+1]=pre[i]+dp[i];
        }
        return dp[n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    int f(int x){
        vector<int>dp(x+1);
        dp[0]=1;
        for (int i = 0; i < v.size(); ++i) {
            for (int j = v[i]; j <= x; ++j) {
                dp[j]+=dp[j-v[i]];
            }
        }
        return dp[x];
    }
    vector<int> findCoins(vector<int>& numWays) {
        int n=numWays.size();
        for (int i = 1; i <= n; ++i) {
            int temp=f(i);
            if (temp!=numWays[i-1]){
                if (temp==numWays[i-1]-1)
                    v.push_back(i);
                else
                    return {};
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
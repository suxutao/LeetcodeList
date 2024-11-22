#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ull = unsigned long long;
    const ull P=1313131;
    int minimumCost(string target, vector<string>& words, vector<int>& costs) {
        int n=target.size();
        unordered_map<int,unordered_map<ull,int>>m;
        vector<int>dp(n+1,INT_MAX/2);
        vector<ull>v(n+1),p(n+1);
        for (int i = 0; i < words.size(); ++i) {
            ull t=0;
            for (auto &j: words[i]){
                t=t*P+j;
            }
            if (m[words[i].size()].contains(t)){
                m[words[i].size()][t]= min(costs[i],m[words[i].size()][t]);
            }else{
                m[words[i].size()][t]=costs[i];
            }
        }
        p[0]=1;dp[0]=0;
        for (int i = 1; i <= n; ++i) {
            v[i]=v[i-1]*P+target[i-1];
            p[i]=p[i-1]*P;
        }
        for (int i = 1; i <= n; ++i) {
            for (auto &[a,b]: m){
                if (a<=i){
                    ull t=v[i]-v[i-a]*p[a];
                    if (b.contains(t)){
                        dp[i]= min(dp[i],dp[i-a]+b[t]);
                    }
                }
            }
        }
        return dp[n]==INT_MAX/2?-1:dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
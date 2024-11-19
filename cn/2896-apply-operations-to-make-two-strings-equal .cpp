#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(string s1, string s2, int x) {
        int cnt=0,n=s1.size();
        vector<int>v,dp;
        for (int i = 0; i < n; ++i) {
            if (s1[i]!=s2[i]){
                ++cnt;
                v.push_back(i);
            }
        }
        if (cnt==0)
            return 0;
        if (cnt&1)
            return -1;
        dp.resize(v.size()+1);
        dp[1]=x;
        for (int i = 2; i <= v.size(); ++i) {
            dp[i]= min(dp[i-2]+(v[i-1]-v[i-2])*2,dp[i-1]+x);
        }
        return dp.back()/2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
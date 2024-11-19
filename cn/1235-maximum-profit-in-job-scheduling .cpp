#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n=startTime.size();
        vector<int>v(n),dp(n+1),end(n);
        for (int i = 0; i < n; ++i) {
            v[i]=i;
        }
        sort(v.begin(), v.end(),[&](int&a,int&b){
            return endTime[a]<endTime[b];
        });
        for (int i = 0; i < n; ++i) {
            end[i]=endTime[v[i]];
        }
        for (int i = 1; i <= n; ++i) {
            int k= lower_bound(end.rbegin(), end.rend(),startTime[v[i-1]],greater<>())-end.rbegin();
            k=n-k;
            dp[i]= max(dp[i-1],profit[v[i-1]]+dp[k]);
        }
        return dp[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>a={1,2,3,4,6},b={3,5,10,6,9},c={20,20,100,70,60};
    Solution().jobScheduling(a,b,c);
    return 0;
}
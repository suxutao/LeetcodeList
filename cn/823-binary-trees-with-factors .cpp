#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n=arr.size();
        ll ans=0;
        vector<ll>dp(n,1);
        unordered_map<ll,int>m;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; ++i) {
            m[arr[i]]=i;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= i; ++j) {
                ll chen=(ll)arr[i]*arr[j];
                if (m.contains(chen)){
                    if (i==j){
                        dp[m[chen]]=(dp[m[chen]]+dp[i]*dp[i]%N)%N;
                    }else{
                        dp[m[chen]]=(dp[m[chen]]+dp[i]*dp[j]*2%N)%N;
                    }
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            ans=(ans+dp[i])%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int countTexts(string pressedKeys) {
        ll cnt=0,n=pressedKeys.size(),ans=1;
        char c=pressedKeys[0];
        vector<ll>dp1(n+1),dp2(n+1);
        pressedKeys.push_back('!');
        dp1[0]=dp2[0]=1;
        for (int i = 1; i <= n; ++i) {
            dp1[i]+=dp1[i-1];
            if (i>=2)
                dp1[i]+=dp1[i-2];
            if (i>=3)
                dp1[i]+=dp1[i-3];
            if (i>=4)
                dp1[i]+=dp1[i-4];
            dp1[i]%=N;
        }
        for (int i = 1; i <= n; ++i) {
            dp2[i]+=dp2[i-1];
            if (i>=2)
                dp2[i]+=dp2[i-2];
            if (i>=3)
                dp2[i]+=dp2[i-3];
            dp2[i]%=N;
        }
        for (auto &i: pressedKeys){
            if (i==c){
                cnt++;
            }else{
                if (c=='7'||c=='9')
                    ans=(ans*dp1[cnt])%N;
                else
                    ans=(ans*dp2[cnt])%N;
                c=i;
                cnt=1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
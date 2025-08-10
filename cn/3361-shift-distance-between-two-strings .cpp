#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long shiftDistance(string s, string t, vector<int>& nextCost, vector<int>& previousCost) {
        int n=s.size();
        ll ans=0;
        for (int i = 0; i < n; ++i) {
            ll t1=0,t2=0;
            if (s[i]==t[i])
                continue;
            if (s[i]<t[i]){
                for (int j = s[i]; j < t[i]; ++j) {
                    t1+=nextCost[j-'a'];
                }
                for (int j = 'a'; j <= 'z'; ++j) {
                    if (j<=s[i]||j>t[i])
                        t2+=previousCost[j-'a'];
                }
            }else{
                for (int j = t[i]+1; j <= s[i]; ++j) {
                    t1+=previousCost[j-'a'];
                }
                for (int j = 'a'; j <= 'z'; ++j) {
                    if (j<t[i]||j>=s[i])
                        t2+=nextCost[j-'a'];
                }
            }
            ans+= min(t1,t2);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
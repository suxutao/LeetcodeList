#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int countPalindromes(string s) {
        int n=s.size();
        ll pre[10]{},pre2[10][10]{},suf[10]{},suf2[10][10]{},ans=0;
        for (int i = n-1; i >= 0; --i) {
            int d=s[i]-'0';
            for (int j = 0; j < 10; ++j) {
                suf2[d][j]+=suf[j];
            }
            suf[d]++;
        }
        for (int i = 0; i < n; ++i) {
            int d=s[i]-'0';
            --suf[d];
            for (int j = 0; j < 10; ++j) {
                suf2[d][j]-=suf[j];
            }
            for (int j = 0; j < 10; ++j) {
                for (int k = 0; k < 10; ++k) {
                    ans+=pre2[j][k]*suf2[j][k];
                }
            }
            for (int j = 0; j < 10; ++j) {
                pre2[d][j]+=pre[j];
            }
            pre[d]++;
        }
        return ans%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
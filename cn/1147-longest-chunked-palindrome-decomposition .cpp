#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ull = unsigned long long;
    const ull N=1313131;
    ull P[1005]{1},V[1005]{};
    ull cal(int l,int r){
        return V[r+1]-V[l]*P[r-l+1];
    }
    int longestDecomposition(string text) {
        int n=text.size(),l=0,ans=1;
        for (int i = 0; i < n; ++i) {
            P[i+1]=P[i]*N;
            V[i+1]=V[i]*N+text[i];
        }
        for (int i = 0; i < (n+1)/2 ; ++i) {
            ull a=cal(l,i),b=cal(n-i-1,n-l-1);
            if (a==b){
                if (l==n-l-1){
                    break;
                }
                ans+=2;
                l=i+1;
                if (l==(n+1)/2){
                    --ans;
                    break;
                }
            }
        }

        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().longestDecomposition("aaa");
    return 0;
}
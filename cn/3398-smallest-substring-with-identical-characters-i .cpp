#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minLength(string s, int numOps) {
        int n=s.size(),l=1,r=s.size()+1;
        auto check=[&](int len)->bool {
            int cnt=0;
            if (len==1){
                for (int i = 0; i < n; ++i) {
                    cnt+=(s[i]^i)&1;
                }
                cnt= min(cnt,n-cnt);
            }else{
                int k = 0;
                for (int i = 0; i < n; i++) {
                    k++;
                    if (i == n - 1 || s[i] != s[i + 1]) {
                        cnt += k / (len + 1);
                        k = 0;
                    }
                }
            }
            return cnt<=numOps;
        };
        while (l<r){
            int mid=(l+r)>>1;
            if (!check(mid)){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
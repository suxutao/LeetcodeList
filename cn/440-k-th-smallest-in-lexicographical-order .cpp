#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int child(int cur,ll n){
        ll ans=0,p1=cur,p2=cur;
        while (p1<=n){
            ans+=min(n,p2)-p1+1;
            p1*=10;
            p2=p2*10+9;
        }
        return ans;
    }
    int findKthNumber(int n, int k) {
        int ans=1;
        k--;
        while (k){
            int ch= child(ans,n);
            if (k<ch){
                ans*=10;
                k--;
            }else{
                k-=ch;
                ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
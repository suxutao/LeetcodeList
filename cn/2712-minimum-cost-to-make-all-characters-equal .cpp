#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minimumCost(string s) {
        int n=s.size();
        ll ans=0;
        for (int i = 1; i < n; ++i) {
            if (s[i]!=s[i-1]){
                ans+= min(i,n-i);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
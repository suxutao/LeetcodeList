#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maximumTotalSum(vector<int>& maximumHeight) {
        sort(maximumHeight.begin(), maximumHeight.end(),greater<>());
        ll n=maximumHeight.size(),ans=maximumHeight[0],front=ans;
        for (int i = 1; i < n; ++i) {
            front= min<ll>(front-1,maximumHeight[i]);
            if (front<=0)
                return -1;
            ans+=front;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxWeight(vector<int>& pizzas) {
        ll n=pizzas.size(),ans=0;
        sort(pizzas.begin(), pizzas.end(),greater<>());
        for (int i = 0; i < n / 4; ++i) {
            if (i&1){
                ans+=pizzas[ceil(n/8.)+i];
            }else{
                ans+=pizzas[i/2];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{3,4,2,4,2,4,2,2,4,5,3,2,1,2,1,1};
    Solution().maxWeight(v);
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxTotalValue(vector<int>& nums, int k) {
        ll mx=ranges::max(nums),mn=ranges::min(nums);
        return (mx-mn)*k;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
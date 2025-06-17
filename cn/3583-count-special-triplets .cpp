#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int specialTriplets(vector<int>& nums) {
        ll ans=0;
        unordered_map<int,ll>m,t;
        for (auto &i: nums){
            ++m[i];
        }
        for (auto &i: nums){
            --m[i];
            ans=(ans+m[i*2]*t[i*2])%N;
            ++t[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
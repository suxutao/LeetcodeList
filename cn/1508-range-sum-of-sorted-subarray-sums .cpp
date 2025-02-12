#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        ll ans=0;
        vector<int>v;
        for (int i = 0; i < n; ++i) {
            int sum=0;
            for (int j = i; j < n; ++j) {
                sum+=nums[j];
                v.push_back(sum);
            }
        }
        ranges::sort(v);
        for (int i = left-1; i < right; ++i) {
            ans+=v[i];
        }
        return ans%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int maxSum(vector<int>& nums, int k) {
        ll ans=0;
        int arr[31]{};
        for (auto &num: nums){
            for (int i = 0; i < 31; ++i) {
                if (num>>i&1)
                    ++arr[i];
            }
        }
        for (int i = 0; i < k; ++i) {
            ll temp=0;
            for (int j = 30; j >= 0; --j) {
                if (arr[j]){
                    temp|=1<<j;
                    --arr[j];
                }
            }
            if (temp==0)
                break;
            ans=(ans+temp*temp%N)%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        ll n=arr.size(),ans1=0,ans2=k;
        for (int i = 0; i < n; ++i) {
            ans1+=abs(arr[i]-brr[i]);
        }
        std::sort(arr.begin(), arr.end());
        std::sort(brr.begin(), brr.end());
        for (int i = 0; i < n; ++i) {
            ans2+= abs(arr[i]-brr[i]);
        }
        return min(ans1,ans2);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
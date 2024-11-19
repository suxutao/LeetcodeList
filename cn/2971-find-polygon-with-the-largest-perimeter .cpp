#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    ll sum[100005]={};
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; ++i) {
            sum[i+1]=sum[i]+nums[i];
        }
        for (int i = n-1; i>0; --i) {
            if (nums[i]<sum[i])
                return sum[i+1];
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
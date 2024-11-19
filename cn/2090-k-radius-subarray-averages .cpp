#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long n=nums.size(),t=0;
        vector<int>v(n,-1);
        if ((k<<1|1)>n)
            return v;
        for (int i = 0; i < (k << 1 | 1); ++i) {
            t+=nums[i];
        }
        v[k]=t/(k<<1|1);
        for (int i = k+1; i < n - k; ++i) {
            t+=nums[i+k]-nums[i-k-1];
            v[i]=t/(k<<1|1);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={7,4,3,9,1,8,5,2,6};
    Solution().getAverages(v,3);
    return 0;
}
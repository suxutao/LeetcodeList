#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n=nums.size(),MAX=1;
        vector<int>pre(n,1),suf(n,1);
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i]>nums[j])
                    pre[i]= max(pre[i],pre[j]+1);
            }
        }
        for (int i = n-2; i>=0; --i) {
            for (int j = n-1; j > i; --j) {
                if (nums[i]>nums[j])
                    suf[i]= max(suf[i],suf[j]+1);
            }
        }
        for (int i = 1; i < n-1; ++i) {
            if (pre[i]!=1&&suf[i]!=1)
                MAX= max(MAX,pre[i]+suf[i]-1);
        }
        return n-MAX;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
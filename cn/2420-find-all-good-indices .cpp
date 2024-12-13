#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>v,pre(n,1),suf(n,1);
        for (int i = 1; i < n; ++i) {
            if (nums[i]<=nums[i-1])
                pre[i]=pre[i-1]+1;
        }
        for (int i = n-2; i >= 0; --i) {
            if (nums[i]<=nums[i+1])
                suf[i]=suf[i+1]+1;
        }
        for (int i = k; i < n-k; ++i) {
            if (pre[i-1]>=k&&suf[i+1]>=k){
                v.push_back(i);
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
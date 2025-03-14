#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n=nums.size(),x=0;
        vector<bool>ans(n);
        for (int i = 0; i < n; ++i) {
            x=(x<<1|nums[i])%5;
            ans[i]=x==0;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        for (int i = 0; i < n; ++i) {
            if (nums[i]&1){
                for (int j = 1; j < 32; ++j) {
                    if ((nums[i]>>j&1)==0){
                        ans[i]=nums[i]&~(1<<(j-1));
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
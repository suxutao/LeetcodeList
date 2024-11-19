#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n=nums.size(),MAX=0,ans=0;
        for (int i = 0; i < n; ++i) {
            MAX|=nums[i];
        }
        for (int i = 1; i < 1 << n; ++i) {
            int temp=0;
            for (int j = 0; j < n; ++j) {
                if (i>>j&1)
                    temp|=nums[j];
            }
            if (temp==MAX)
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
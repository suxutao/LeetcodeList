#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int add=0,ans=0,n=nums.size();
        for (int i = 0; i < n; ++i) {
            if ((nums[i]^add)==0){
                ++ans;
                add^=1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
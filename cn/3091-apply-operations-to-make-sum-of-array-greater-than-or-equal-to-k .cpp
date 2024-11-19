#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(int k) {
        if (k==1)
            return 0;
        int ans=INT_MAX;
        for (int i = 1; i <= k / 2; ++i) {
            ans= min(ans,i+ (int)ceil((double)k/i)-2);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
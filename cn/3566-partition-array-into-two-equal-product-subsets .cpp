#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        int n=nums.size();
        for (int i = 1; i < (1 << n)-1; ++i) {
            ll a=1,b=1;
            for (int j = 0; j < n; ++j) {
                if (i>>j&1)
                    a*=nums[j];
                else
                    b*=nums[j];
                if (a>target||b>target)
                    break;
            }
            if (a==target&&b==target)
                return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int distinctIntegers(int n) {
        vector<int> nums(n + 1);
        nums[n] = 1;
        for (int k = 0; k < n; k++) {
            for (int x = 1; x <= n; x++) {
                if (nums[x] == 0) {
                    continue;
                }
                for (int i = 1; i <= n; i++) {
                    if (x % i == 1) {
                        nums[i] = 1;
                    }
                }
            }
        }
        return accumulate(nums.begin(), nums.end(), 0);
    }
};

//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
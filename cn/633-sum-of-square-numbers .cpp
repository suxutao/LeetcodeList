#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool judgeSquareSum(int c) {
        if (c==0)
            return true;
        unordered_set<int>s;
        for (int i = 0; i <= sqrt(c); ++i) {
            s.insert(c-i*i);
        }
        for (int i = 0; i <= sqrt(c); ++i) {
            if (s.contains(i*i))
                return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().judgeSquareSum(11);
    return 0;
}
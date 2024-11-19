#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isFascinating(int n) {
        string s=to_string(n)+to_string(n*2)+ to_string(n*3);
        if (s.size()>9)
            return false;
        sort(s.begin(), s.end());
        for (int i = 1; i <= 9; ++i) {
            if (s[i-1]!=i+'0')
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().isFascinating(192);
    return 0;
}
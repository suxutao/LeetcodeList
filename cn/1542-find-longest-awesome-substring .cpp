#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestAwesome(string s) {
        int n = s.size();
        vector<int> pos(1 << 10, n);
        pos[0] = -1;
        int ans = 0, pre = 0;
        for (int i = 0; i < n; i++) {
            pre ^= 1 << (s[i] - '0');
            for (int d = 0; d < 10; d++) {
                ans = max(ans, i - pos[pre ^ (1 << d)]);
            }
            ans = max(ans, i - pos[pre]);
            if (pos[pre] == n) {
                pos[pre] = i;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
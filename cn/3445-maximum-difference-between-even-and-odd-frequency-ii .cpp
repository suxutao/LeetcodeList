#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxDifference(string s, int k) {
        const int inf = INT_MAX / 2;
        int ans = -inf;
        for (int x = 0; x < 5; x++) {
            for (int y = 0; y < 5; y++) {
                if (y == x) {
                    continue;
                }
                int cur_s[5]{}, pre_s[5]{};
                int min_s[2][2] = {{inf, inf}, {inf, inf}};
                int left = 0;
                for (int i = 0; i < s.size(); i++) {
                    cur_s[s[i] - '0']++;
                    int r = i + 1;
                    while (r - left >= k && cur_s[x] > pre_s[x] && cur_s[y] > pre_s[y]) {
                        int& p = min_s[pre_s[x] & 1][pre_s[y] & 1];
                        p = min(p, pre_s[x] - pre_s[y]);
                        pre_s[s[left] - '0']++;
                        left++;
                    }
                    ans = max(ans, cur_s[x] - cur_s[y] - min_s[cur_s[x] & 1 ^ 1][cur_s[y] & 1]);
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
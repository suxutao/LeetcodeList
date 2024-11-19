#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumSubstringsInPartition(string s) {
        int n = s.length();
        vector<int> f(n + 1, INT_MAX);
        f[0] = 0;
        for (int i = 0; i < n; i++) {
            int cnt[26]{}, k = 0, max_cnt = 0;
            for (int j = i; j >= 0; j--) {
                k += cnt[s[j] - 'a']++ == 0;
                max_cnt = max(max_cnt, cnt[s[j] - 'a']);
                if (i - j + 1 == k * max_cnt) {
                    f[i + 1] = min(f[i + 1], f[j] + 1);
                }
            }
        }
        return f[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(string s, int k) {
        int n = s.size();
        set<int> not_vis[2];
        for (int m = 0; m < 2; m++) {
            for (int i = m; i <= n; i += 2) {
                not_vis[m].insert(i);
            }
            not_vis[m].insert(n + 1); // 哨兵，下面无需判断 it != st.end()
        }

        int start = ranges::count(s, '0'); // 起点
        not_vis[start % 2].erase(start);
        vector<int> q = {start};
        for (int ans = 0; !q.empty(); ans++) {
            vector<int> nxt;
            for (int z : q) {
                if (z == 0) { // 没有 0，翻转完毕
                    return ans;
                }
                // not_vis[mn % 2] 中的从 mn 到 mx 都可以从 z 翻转到
                int mn = z + k - 2 * min(k, z);
                int mx = z + k - 2 * max(0, k - n + z);
                auto& st = not_vis[mn % 2];
                for (auto it = st.lower_bound(mn); *it <= mx; it = st.erase(it)) {
                    nxt.push_back(*it);
                }
            }
            q = move(nxt);
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
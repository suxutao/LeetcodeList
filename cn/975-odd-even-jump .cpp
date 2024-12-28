#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    /* 单调栈，记录每个索引值的后继 */
    vector<int> getConnIndex(vector<int>& order)
    {
        int n = order.size();
        vector<int> out(n, -1);
        stack<int> st;
        st.push(order[0]);

        for (int i = 1; i < n; i++) {
            while(!st.empty() && st.top() < order[i]) {
                out[st.top()] = order[i];
                st.pop();
            }
            st.push(order[i]);
        }
        return out;
    }

    int oddEvenJumps(vector<int>& A) {
        int ans = 0;
        int n = A.size();
        vector<int> order(n, 0);
        for (int i = 0; i < n; i++) {
            order[i] = i;
        }
        sort(order.begin(), order.end(), [&](int i, int j) {
            return A[i] < A[j] || (A[i] == A[j] && i < j);
        });
        vector<int> larger = getConnIndex(order);

        sort(order.begin(), order.end(), [&](int i, int j) {
            return A[i] > A[j] || (A[i] == A[j] && i < j);
        });
        vector<int> smaller = getConnIndex(order);

        vector<bool> canodd(n, false);
        vector<bool> caneven(n, false);
        canodd[n-1] = true;
        caneven[n-1] = true;
        for (int i = n-2; i >= 0; i--) {
            int nl = larger[i];
            int ns = smaller[i];
            if (nl != -1 && caneven[nl]) {
                canodd[i] = true;
            }
            if (ns != -1 && canodd[ns]) {
                caneven[i] = true;
            }
        }
        for (int i = 0; i < n; i++) {
            ans += canodd[i] ? 1 : 0;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{5,1,3,4,2};
    Solution().oddEvenJumps(v);
    return 0;
}
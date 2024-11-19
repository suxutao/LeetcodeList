#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestWPI(vector<int>& hours) {
        int n = hours.size(), ans = 0, s[n + 1]; // 前缀和
        stack<int> st;
        st.push(s[0] = 0);
        for (int j = 1; j <= n; ++j) {
            s[j] = s[j - 1] + (hours[j - 1] > 8 ? 1 : -1);
            if (s[j] < s[st.top()]) st.push(j); // 感兴趣的 j
        }
        for (int i = n; i; --i)
            while (!st.empty() && s[i] > s[st.top()]) {
                ans = max(ans, i - st.top()); // [栈顶,i) 可能是最长子数组
                st.pop();
            }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
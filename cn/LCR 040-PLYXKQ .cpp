#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximalRectangle(vector<string>& matrix) {
        if (matrix.size() == 0) {
            return 0;
        }
        int m = matrix.size(),n = matrix[0].size();
        vector<vector<int>>left(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == '1') {
                    left[i][j] = (j == 0 ? 0: left[i][j - 1]) + 1;
                }
            }
        }
        int ans = 0;
        for (int j = 0; j < n; j++) {
            vector<int> up(m, 0), down(m, 0);
            stack<int> s;
            for (int i = 0; i < m; i++) {
                while (!s.empty() && left[s.top()][j] >= left[i][j]) {
                    s.pop();
                }
                up[i] = s.empty() ? -1 : s.top();
                s.push(i);
            }
            while (!s.empty())
                s.pop();
            for (int i = m - 1; i >= 0; i--) {
                while (!s.empty() && left[s.top()][j] >= left[i][j]) {
                    s.pop();
                }
                down[i] = s.empty() ? m : s.top();
                s.push(i);
            }
            for (int i = 0; i < m; i++) {
                int height = down[i] - up[i] - 1;
                int area = height * left[i][j];
                ans = max(ans, area);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
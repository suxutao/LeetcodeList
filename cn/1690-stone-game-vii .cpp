#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int stoneGameVII(vector<int>& stones) {
        int n = stones.size();
        vector<int> sum(n + 1);
        vector<vector<int>> v(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            sum[i + 1] = sum[i] + stones[i];
        }
        for (int i = n - 2; i >= 0; i--) {
            for (int j = i + 1; j < n; j++) {
                v[i][j] = max(sum[j + 1] - sum[i + 1] - v[i + 1][j], sum[j] - sum[i] - v[i][j - 1]);
            }
        }
        return v[0][n - 1];
    }
};

//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
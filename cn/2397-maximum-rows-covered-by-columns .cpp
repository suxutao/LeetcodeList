#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumRows(vector<vector<int>>& matrix, int numSelect) {
        int m = matrix.size(),n = matrix[0].size();
        vector<int> v(m, 0);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++){
                v[i] += matrix[i][j] << (n - j - 1);
            }
        }
        int ans = 0,c = 0,l = (1 << n),t;
        while ((++c) < l) {
            if (__builtin_popcount(c) != numSelect) {
                continue;
            }
            t = 0;
            for (int j = 0; j < m; j++) {
                if ((v[j] & c) == v[j]) {
                    ++t;
                }
            }
            ans = max(ans, t);
        }
        return ans;
    }
};

//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
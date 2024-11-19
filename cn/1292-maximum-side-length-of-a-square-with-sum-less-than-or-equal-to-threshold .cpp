#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int m=mat.size(),n=mat[0].size(),ans= min(m,n);
        vector<vector<int>>v(m+1,vector<int>(n+1));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                v[i+1][j+1]=mat[i][j]+v[i][j+1]+v[i+1][j]-v[i][j];
            }
        }
        for (; ans; --ans) {
            for (int i = ans; i <= m; ++i) {
                for (int j = ans; j <= n; ++j) {
                    if (v[i][j]-v[i-ans][j]-v[i][j-ans]+v[i-ans][j-ans]<=threshold)
                        return ans;
                }
            }
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
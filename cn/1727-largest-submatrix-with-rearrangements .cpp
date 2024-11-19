#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size(),ans=0;
        vector<vector<int>>up(m,vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j]){
                    up[i][j]=i?1+up[i-1][j]:1;
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            vector<int>buf(n);
            for (int j = 0; j < n; ++j) {
                buf[j]=up[i][j];
            }
            sort(buf.begin(), buf.end(),greater<>());
            for (int j = 0; j < n; ++j) {
                ans= max(ans,(j+1)*buf[j]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
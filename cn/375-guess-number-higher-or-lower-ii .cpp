#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int getMoneyAmount(int n) {
        if (n==1) return 0;
        if (n==2) return 1;
        vector<vector<int>>v(n+1,vector<int>(n+1,INT_MAX));
        for (int i = 1; i <= n; ++i) {
            v[i][i]=0;
        }
        for (int i = 1; i < n; ++i) {
            v[i][i+1]=i;
        }
        for (int i = 1; i < n - 1; ++i) {
            v[i][i+2]=i+1;
        }
        for (int l = 4; l <= n; ++l) {
            for (int i = 1; i <= n-l+1; ++i) {
                int j=i+l-1;
                for (int k = i+1; k < j; ++k) {
                    v[i][j]= min(v[i][j], max(v[i][k-1],v[k+1][j])+k);
                }
            }
        }
        return v[1][n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
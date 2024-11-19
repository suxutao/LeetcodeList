#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    long long sellingWood(int m, int n, vector<vector<int>>& prices) {
        vector<vector<long long>>v(m+1,vector<long long>(n+1));
        for (auto &i: prices){
            v[i[0]][i[1]]= max(v[i[0]][i[1]],(long long)i[2]);
        }
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                for (int k = 0; k <= i; ++k) {
                    v[i][j]= max(v[i][j],v[i-k][j]+v[k][j]);
                }
                for (int k = 0; k <= j; ++k) {
                    v[i][j]= max(v[i][j],v[i][j-k]+v[i][k]);
                }
            }
        }
        return v[m][n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
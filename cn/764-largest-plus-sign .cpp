#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        int ans=0;
        vector<vector<int>>u(n,vector<int>(n)),l(n,vector<int>(n)),r(n,vector<int>(n)),d(n,vector<int>(n)),vis(n,vector<int>(n));
        for (auto &item: mines){
            vis[item[0]][item[1]]=1;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!vis[i][j]){
                    u[i][j]=1+(i?u[i-1][j]:0);
                    l[i][j]=1+(j?l[i][j-1]:0);
                }
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            for (int j = n - 1; j >= 0; --j) {
                if (!vis[i][j]){
                    d[i][j]=1+(i!=n-1?d[i+1][j]:0);
                    r[i][j]=1+(j!=n-1?r[i][j+1]:0);
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!vis[i][j]){
                    ans= max(ans,min({l[i][j], r[i][j], u[i][j], d[i][j]}));
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
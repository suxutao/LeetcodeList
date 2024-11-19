#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m=land.size(),n=land[0].size();
        vector<vector<int>>v,vis(m,vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!vis[i][j]&&land[i][j]){
                    int k=i+1,l=j+1;
                    for (; k < m; ++k) {
                        if (!land[k][j])
                            break;
                    }
                    for (; l < n; ++l) {
                        if (!land[i][l])
                            break;
                    }
                    for (int i1 = i; i1 < k; ++i1) {
                        for (int k1 = j; k1 < l; ++k1) {
                            vis[i1][k1]=1;
                        }
                    }
                    v.push_back({i,j,k-1,l-1});
                }
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
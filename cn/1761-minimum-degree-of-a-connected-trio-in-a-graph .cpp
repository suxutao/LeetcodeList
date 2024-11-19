#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minTrioDegree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>g(n+1,vector<int>(n+1));
        vector<int>deg(n+1);
        int ans=INT_MAX;
        for (auto &i: edges){
            g[i[0]][i[1]]=1;
            g[i[1]][i[0]]=1;
            deg[i[0]]++;deg[i[1]]++;
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = i+1; j <= n; ++j) {
                for (int k = j+1; k <= n; ++k) {
                    if (g[i][j]&&g[i][k]&&g[j][k]){
                        ans= min(ans,deg[i]+deg[j]+deg[k]-6);
                    }
                }
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
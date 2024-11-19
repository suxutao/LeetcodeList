#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>>g(n,vector<int>(n,INT_MAX/2));
        int ans=-1,MIN=n;
        for (int i = 0; i < n; ++i) {
            g[i][i]=0;
        }
        for (auto &i: edges){
            g[i[0]][i[1]]=i[2];
            g[i[1]][i[0]]=i[2];
        }
        for (int k = 0; k < n; ++k) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    g[i][j]= min(g[i][j],g[i][k]+g[k][j]);
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            int cnt=0;
            for (int j = 0; j < n; ++j) {
                cnt+=g[i][j]<=distanceThreshold;
            }
            if (cnt<MIN){
                MIN=cnt;
                ans=i;
            }else if (cnt==MIN){
                ans=i;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
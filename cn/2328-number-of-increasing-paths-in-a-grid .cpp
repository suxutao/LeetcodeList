#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    ll ans=0,m,n;
    int arr[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    vector<vector<ll>>vis;
    ll dfs(vector<vector<int>>&g,int x,int y){
        if (vis[x][y])
            return vis[x][y];
        ll temp=1;
        for (auto [a,b]: arr){
            a+=x;b+=y;
            if (a<0||b<0||a>=m||b>=n||g[a][b]<=g[x][y])
                continue;
            temp+=dfs(g,a,b);
        }
        ans=(ans+temp)%N;
        return vis[x][y]=temp%N;
    }
    int countPaths(vector<vector<int>>& grid) {
        m=grid.size(),n=grid[0].size();
        vis.assign(m,vector<ll>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!vis[i][j]){
                    dfs(grid,i,j);
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
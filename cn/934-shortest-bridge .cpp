#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int shortestBridge(vector<vector<int>>& grid) {
        int n=grid.size(),a=1,ans=INT_MAX;
        vector<array<int,2>>arr{{0,1},{1,0},{-1,0},{0,-1}};
        vector<vector<bool>>vis(n,vector<bool>(n));
        vector<int>v[3];
        auto dfs=[&](auto&&dfs,int x,int y)->void{
            v[a].push_back(x<<16|y);
            for (auto [aa,bb]: arr){
                aa+=x;bb+=y;
                if (aa>=0&&bb>=0&&aa<n&&bb<n&&grid[aa][bb]&&!vis[aa][bb]){
                    vis[aa][bb]=1;
                    dfs(dfs,aa,bb);
                }
            }
        };
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]&&!vis[i][j]){
                    vis[i][j]=1;
                    dfs(dfs,i,j);
                    ++a;
                }
            }
        }
        for (auto &b: v[1]){
            int x1=b>>16,y1=b<<16>>16;
            for (auto &c: v[2]){
                int x2=c>>16,y2=c<<16>>16;
                ans=min(ans, abs(x1-x2)+abs(y1-y2)-1);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
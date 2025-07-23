#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[4][2]{{0,1},{1,0},{-1,0},{0,-1}};
    int countIslands(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size(),ans=0;
        vector<vector<bool>>vis(m,vector<bool>(n));
        auto dfs=[&](this auto&&dfs,int x,int y)->long long{
            long long res=grid[x][y];
            for (auto &[a,b]: arr){
                if (x+a>=0&&x+a<m&&y+b>=0&&y+b<n&&grid[x+a][y+b]&&!vis[x+a][y+b]){
                    vis[x+a][y+b]=1;
                    res+=dfs(x+a,y+b);
                }
            }
            return res;
        };
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]&&!vis[i][j]){
                    vis[i][j]=1;
                    ans+=dfs(i,j)%k==0;
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
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
int arr[4][2]={0,1,1,0,0,-1,-1,0};
class Solution {
public:
    int m,n;
    vector<vector<bool>>vis;
    bool dfs(vector<vector<int>>&v1, vector<vector<int>>&v2,int x,int y){
        bool b=v1[x][y]==1;
        for (auto &i: arr){
            bool bb=x+i[0]>=0&&x+i[0]<m&&y+i[1]>=0&&y+i[1]<n;
            if (bb&&v2[i[0]+x][i[1]+y]&&!vis[i[0]+x][i[1]+y]) {
                vis[x+i[0]][y+i[1]]=true;
                bool B= dfs(v1, v2, x + i[0], y + i[1]);
                b=b&&B;
            }
        }
        return b;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        m=grid1.size(),n=grid1[0].size();
        vis.assign(m,vector<bool>(n,false));
        int ans=0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid2[i][j]&&!vis[i][j]) {
                    vis[i][j]=true;
                    ans += dfs(grid1, grid2, i, j);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v1={{1,1,1,0,0},{0,1,1,1,1},{0,0,0,0,0},{1,0,0,0,0},{1,1,0,1,1}};
    vector<vector<int>>v2={{1,1,1,0,0},{0,0,1,1,1},{0,1,0,0,0},{1,0,1,1,0},{0,1,0,1,0}};
    Solution().countSubIslands(v1,v2);
    return 0;
}
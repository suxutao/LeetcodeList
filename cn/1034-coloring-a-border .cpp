#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int se,m,n,yuan;
    int arr[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    vector<vector<bool>>vis;
    bool pan(int x,int y,vector<vector<int>>&v){
        if (x<0||y<0||x>=m||y>=n||v[x][y]!=se||!vis[x][y])
            return 0;
        return 1;
    }
    void dfs(int x,int y,vector<vector<int>>&v){
        if (x<0||y<0||x>=m||y>=n||v[x][y]!=yuan||vis[x][y])
            return;
        v[x][y]=se;vis[x][y]=1;
        for (auto &[a,b]: arr){
            dfs(a+x,b+y,v);
        }
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        se=color;m=grid.size(),n=grid[0].size();yuan=grid[row][col];
        vis.assign(m,vector<bool>(n));
        dfs(row,col,grid);
        vector<pair<int,int>>v;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (vis[i][j]&&grid[i][j]==se){
                    int temp=0;
                    for (auto &[a,b]: arr){
                        temp+=pan(i+a,j+b,grid);
                    }
                    if (temp==4)
                        v.push_back({i,j});
                }
            }
        }
        for (auto &[a,b]: v){
            grid[a][b]=yuan;
        }
        return grid;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{1,1,1},{1,1,1},{1,1,1}};
    Solution().colorBorder(v,1,1,2);
    return 0;
}
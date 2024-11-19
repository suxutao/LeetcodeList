#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<bool>>vis;
    int ans=0,arr[4][2]={0,1,1,0,0,-1,-1,0};
    int m,n;
    bool pan(int x,int y,vector<vector<int>>&v){
        if (x<0||x>=m||y<0||y>=n)
            return false;
        if (v[x][y]==0||vis[x][y])
            return false;
        return true;
    }
    void dfs(int x,int y,int score,vector<vector<int>>&v){
        ans= max(ans,score+v[x][y]);
        for (auto &i: arr){
            if (pan(x+i[0],y+i[1],v)){
                vis[x+i[0]][y+i[1]]=true;
                dfs(x+i[0],y+i[1],score+v[x][y],v);
                vis[x+i[0]][y+i[1]]=false;
            }
        }
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        m=grid.size(),n=grid[0].size();
        vis.assign(m,vector<bool>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]) {
                    vis[i][j]=true;
                    dfs(i, j, 0, grid);
                    vis[i][j]=false;
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
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size(),nw=word.size();
        int arr[4][2]{{-1,0},{0,1},{0,-1},{1,0}};
        vector<vector<bool>>vis;
        auto dfs=[&](auto&&dfs,int x,int y,int p)->bool{
            if (p==nw-1&&board[x][y]==word[p])
                return true;
            if (board[x][y]!=word[p]){
                return false;
            }
            vis[x][y]=1;
            for (auto &[i,j]: arr){
                int xx=i+x,yy=j+y;
                if (xx>=0&&xx<m&&yy>=0&&yy<n&&!vis[xx][yy]&&dfs(dfs,xx,yy,p+1)){
                    return true;
                }
            }
            vis[x][y]=0;
            return false;
        };
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                vis.assign(m,vector<bool>(n));
                if (dfs(dfs,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
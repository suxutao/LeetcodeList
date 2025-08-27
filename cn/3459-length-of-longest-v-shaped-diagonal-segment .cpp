#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),ans=0;
        int arr[4][2]{{1,1},{1,-1},{-1,-1},{-1,1}};
        int mem[501][501][4][2]{};
        auto dfs=[&](this auto&&dfs,int x,int y,int k,bool turn,int target){
            x+=arr[k][0];
            y+=arr[k][1];
            if (x<0||y<0||x>=m||y>=n||grid[x][y]!=target)
                return 0;
            int&res=mem[x][y][k][turn];
            if (res)
                return res;
            res=dfs(x,y,k,turn,2-target)+1;
            if (turn){
                res= max(res,dfs(x,y,(k+1)%4,0,2-target)+1);
            }
            return res;
        };
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]==1){
                    for (int k = 0; k < 4; ++k) {
                        ans=max(ans,dfs(i,j,k,true,2)+1);
                    }
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
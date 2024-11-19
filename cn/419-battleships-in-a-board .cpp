#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<bool>> vv;
    int m,n;
    void dfs(vector<vector<char>>& v,int i,int j){
        vv[i][j]=true;
        while (i<m-1&&v[i+1][j]=='X'){
            vv[++i][j]=true;
        }
        while (j<n-1&&v[i][j+1]=='X'){
            vv[i][++j]=true;
        }
    }
    int countBattleships(vector<vector<char>>& board) {
        m=board.size(),n=board[0].size();
        int ans=0;
        vv.assign(m,vector<bool>(n,false));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!vv[i][j]&&board[i][j]=='X'){
                    dfs(board,i,j);
                    ans++;
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
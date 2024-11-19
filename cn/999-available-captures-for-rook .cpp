#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int m=board.size(),n=board[0].size();
        int x,y,ans=0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j]=='R'){
                    x=i;y=j;
                    break;
                }
            }
        }
        for (int i = x+1; i < m; ++i) {
            if (board[i][y]=='B')
                break;
            if (board[i][y]=='p'){
                ++ans;
                break;
            }
        }
        for (int i = x-1; i >= 0; --i) {
            if (board[i][y]=='B')
                break;
            if (board[i][y]=='p'){
                ++ans;
                break;
            }
        }
        for (int i = y+1; i < n; ++i) {
            if (board[x][i]=='B')
                break;
            if (board[x][i]=='p'){
                ++ans;
                break;
            }
        }
        for (int i = y-1; i >= 0; --i) {
            if (board[x][i]=='B')
                break;
            if (board[x][i]=='p'){
                ++ans;
                break;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
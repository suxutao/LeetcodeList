#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int n = 0; n < 81; ++n) {
            int row=n/9,col=n%9;
            if (board[row][col]=='.')
                continue;
            char c=board[row][col];
            for (int i = 0; i < 9; ++i) {
                if (board[row][i]==c&&i!=col)
                    return false;
            }
            for (int i = 0; i < 9; ++i) {
                if (board[i][col]==c&&i!=row)
                    return false;
            }
            int x=row/3,y=col/3;
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    if (board[x*3+i][y*3+j]==c&&(x*3+i)!=row&&(y*3+j)!=col)
                        return false;
                }
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
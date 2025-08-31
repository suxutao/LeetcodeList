#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fin=80;
    bool jianyan(char c,vector<vector<char>>& board,int n){
        int row=n/9,col=n%9;
        for (int i = 0; i < 9; ++i) {
            if (board[row][i]==c)
                return false;
        }
        for (int i = 0; i < 9; ++i) {
            if (board[i][col]==c)
                return false;
        }
        int x=row/3,y=col/3;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[x*3+i][y*3+j]==c)
                    return false;
            }
        }
        return true;
    }
    bool hui(vector<vector<char>>& board,int n){
        if (n>fin)
            return true;
        while(board[n/9][n%9]!='.') n++;
        int row=n/9,col=n%9;
        for (char j = '1'; j <= '9'; ++j) {
            if (jianyan(j,board,n)){
                board[row][col]=j;
                if(hui(board,n+1))
                    return true;
                board[row][col]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        for (int i = 80; i >= 0; --i) {
            if (board[i/9][i%9]=='.'){
                fin=i;
                break;
            }
        }
        hui(board,0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
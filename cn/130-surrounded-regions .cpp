#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>v;
    queue<pair<int,int>>q;
    void bfs(int x,int y,vector<vector<char>>& t){
        int a,b;
        q.push({x,y});
        while (!q.empty()){
            a=q.front().first;
            b=q.front().second;
            v[a][b]=1;
            if (a+1<t.size()&&t[a+1][b]=='O'&&!v[a+1][b]) {
                q.push({a + 1, b});
                v[a+1][b]=1;
            }
            if (b+1<t[0].size()&&t[a][b+1]=='O'&&!v[a][b+1]) {
                q.push({a, b + 1});
                v[a][b+1]=1;
            }
            if (a-1>=0&&t[a-1][b]=='O'&&!v[a-1][b]) {
                q.push({a - 1, b});
                v[a-1][b]=1;
            }
            if (b-1>=0&&t[a][b-1]=='O'&&!v[a][b-1]) {
                q.push({a, b - 1});
                v[a][b-1]=1;
            }
            q.pop();
        }
    }
    void solve(vector<vector<char>>& board) {
        v.assign(board.size(),vector<int>(board[0].size(),0));
        for (int i = 0; i < board.size(); ++i) {
            if (board[i][0]=='O'&&!v[i][0])
                bfs(i,0,board);
            if (board[i][board[0].size()-1]=='O'&&!v[i][board[0].size()-1])
                bfs(i,board[0].size()-1,board);
        }
        for (int i = 0; i < board[0].size(); ++i) {
            if (board[0][i]=='O'&&!v[0][i])
                bfs(0,i,board);
            if (board[board.size()-1][i]=='O'&&!v[board.size()-1][i])
                bfs(board.size()-1,i,board);
        }
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                if (board[i][j]=='O'&&!v[i][j])
                    board[i][j]='X';
            }
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
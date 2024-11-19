#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int m,n;
    int arr[8][2]={{0,1},{1,0},{0,-1},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};
    int f(vector<string>& chessboard,int x,int y){
        int ans=0;
        vector<vector<pair<int,int>>>vv;
        for (auto &[a,b]: arr){
            int w=0,xt=x+a,yt=y+b;
            vector<pair<int,int>>v;
            for (; xt>=0&&xt<m&&yt>=0&&yt<n; xt+=a,yt+=b) {
                if (chessboard[xt][yt]=='X'){
                    if (w){
                        ans+=w;
                        vv.emplace_back(v);
                    }
                    break;
                }else if (chessboard[xt][yt]=='O'){
                    w++;
                    v.emplace_back(xt,yt);
                }else{
                    break;
                }
            }
        }
        for (auto &v: vv){
            for (auto &[a,b]: v){
                chessboard[a][b]='X';
            }
        }
        for (auto &v: vv){
            for (auto &[a,b]: v){
                ans+=f(chessboard,a,b);
            }
        }
        return ans;
    }
    int flipChess(vector<string>& chessboard) {
        int ans=0;
        m=chessboard.size();
        n=chessboard[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (chessboard[i][j]=='.'){
                    vector<string>t=chessboard;
                    t[i][j]='X';
                    ans= max(ans, f(t,i,j));
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
   vector<string>t={{".O....."},
              {".O....."},
              {"XOO.OOX"},
              {".OO.OO."},
              {".XO.OX."},
              {"..X.X.."}};
    Solution().flipChess(t);
    return 0;
}
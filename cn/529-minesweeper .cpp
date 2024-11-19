#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[8][2]={1,1,1,0,0,1,1,-1,-1,1,-1,-1,0,-1,-1,0};
    int count(vector<vector<char>>& v,int x,int y){
        int m=v.size(),n=v[0].size();
        if (x<0||y<0||x>=m||y>=n)
            return 0;
        if (v[x][y]=='M'||v[x][y]=='X')
            return 1;
        return 0;
    }
    void dfs(vector<vector<char>>& v,int x,int y){
        int m=v.size(),n=v[0].size(),Count=0;
        if (x<0||y<0||x>=m||y>=n)
            return;
        if (v[x][y]=='M'){
            v[x][y]='X';
            return;
        }else if (v[x][y]=='E'){
            for (int i = 0; i < 8; ++i) {
                Count+= count(v,x+arr[i][0],y+arr[i][1]);
            }
            if (Count==0){
                v[x][y]='B';
                for (int i = 0; i < 8; ++i) {
                    dfs(v,x+arr[i][0],y+arr[i][1]);
                }
            }else{
                v[x][y]=Count+'0';
            }
        }
    }
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        dfs(board,click[0],click[1]);
        return board;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
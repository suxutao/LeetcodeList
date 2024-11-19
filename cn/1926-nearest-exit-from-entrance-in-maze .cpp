#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m=maze.size(),n=maze[0].size(),cnt=0,u=entrance[0],v=entrance[1];
        vector<vector<bool>>vis(m,vector<bool>(n));
        queue<int>q;
        vis[u][v]=1;
        q.push(u<<16|v);
        while (!q.empty()){
            int sz=q.size();
            for (int i = 0; i < sz; ++i) {
                int x=q.front()>>16,y=q.front()<<16>>16;
                q.pop();
                if ((x==0||y==0||x==m-1||y==n-1)&&(x!=u||y!=v))
                    return cnt;
                for (auto [a,b]: arr){
                    a+=x;b+=y;
                    if (a<0||b<0||a>=m||b>=n||vis[a][b]||maze[a][b]=='+')
                        continue;
                    vis[a][b]=1;
                    q.push(a<<16|b);
                }
            }
            ++cnt;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
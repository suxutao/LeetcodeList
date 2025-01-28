#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[4][2]{{0,1},{1,0},{-1,0},{0,-1}};
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n));
        priority_queue<tuple<int,int,int>>q;
        q.emplace(health-(grid[0][0]==1),0,0);
        vis[0][0]=1;
        while (!q.empty()){
            auto[z,x,y]=q.top();
            if (x==m-1&&y==n-1)
                return true;
            q.pop();
            if (z==0)
                continue;
            for (auto &[a,b]: arr){
                if (x+a>=0&&x+a<m&&y+b>=0&&y+b<n&&!vis[x+a][y+b]){
                    vis[x+a][y+b]=1;
                    if (grid[x+a][y+b]){
                        if (z>1)
                            q.emplace(z-1,x+a,y+b);
                    }else{
                        q.emplace(z,x+a,y+b);
                    }
                }
            }
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{1,1,1},{1,0,1},{1,1,1}};
    Solution().findSafeWalk(v,5);
    return 0;
}
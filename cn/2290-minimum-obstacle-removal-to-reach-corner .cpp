#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int arr[4][2]{{0,1},{1,0},{-1,0},{0,-1}};
        deque<pair<int,int>>d{{0,0}};
        vector<vector<int>>dis(m,vector<int>(n,INT_MAX));
        dis[0][0]=0;
        while (!d.empty()){
            auto [x,y]=d.front();
            if (x==m-1&&y==n-1)
                break;
            d.pop_front();
            for (auto [a,b]: arr){
                a+=x;b+=y;
                if (a<0||b<0||a>=m||b>=n)
                    continue;
                if (dis[a][b]>dis[x][y]+grid[a][b]){
                    dis[a][b]=dis[x][y]+grid[a][b];
                    if (grid[a][b])
                        d.push_back({a,b});
                    else
                        d.push_front({a,b});
                }
            }
        }
        return dis[m-1][n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
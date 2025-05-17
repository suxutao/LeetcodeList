#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size(),ans=0;
        if (k >= m + n - 3) return m + n - 2;
        int arr[4][2]{{0,1},{1,0},{0,-1},{-1,0}};
        queue<array<int,3>>q;
        vector<vector<int>>v(m,vector<int>(n,-1));
        q.push({0,0,k});
        v[0][0]=k;
        while (!q.empty()){
            int sz=q.size();
            for (int ii = 0; ii < sz; ++ii) {
                auto [i,j,l]=q.front();
                if (i==m-1&&j==n-1)
                    return ans;
                q.pop();
                for (auto [x,y]: arr){
                    x+=i;y+=j;
                    if (x>=0&&x<m&&y>=0&&y<n&&l>=grid[x][y]&&l-grid[x][y]>v[x][y]){
                        v[x][y]=l-grid[x][y];
                        q.push({x,y,l-grid[x][y]});
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
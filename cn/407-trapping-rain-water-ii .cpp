#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    int arr[4][2]{{0,1},{1,0},{0,-1},{-1,0}};
    int trapRainWater(vector<vector<int>>& heightMap) {
        int m=heightMap.size(),n=heightMap[0].size(),ans=0;
        if (m<=2||n<=2)
            return 0;
        vector<vector<bool>>vis(m,vector<bool>(n));
        priority_queue<pii,vector<pii>,greater<>>q;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i==0||j==0||i==m-1||j==n-1){
                    q.emplace(heightMap[i][j],i<<16|j);
                    vis[i][j]=1;
                }
            }
        }
        while (!q.empty()){
            auto pi=q.top();q.pop();
            int a=pi.second>>16,b=pi.second<<16>>16;
            for (auto [x,y]: arr){
                x+=a;y+=b;
                if (x>=0&&y>=0&&x<m&&y<n&&!vis[x][y]){
                    int t= max(pi.first,heightMap[x][y]);
                    ans+=t-heightMap[x][y];
                    vis[x][y]=1;
                    q.emplace(t,x<<16|y);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
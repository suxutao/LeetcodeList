#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> pondSizes(vector<vector<int>>& land) {
        int m= land.size(),n=land[0].size();
        int arr[8][2]{{1,0},{0,1},{0,-1},{-1,0},{1,1},{-1,-1},{-1,1},{1,-1}};
        vector<int>v;
        vector<vector<bool>>vis(m,vector<bool>(n));
        function<int(int,int)> dfs=[&](int x,int y){
            if (x<0||y<0||x>=m||y>=n||land[x][y]||vis[x][y])
                return 0;
            vis[x][y]=1;
            int ans=1;
            for (auto &[a,b]: arr){
                ans+=dfs(x+a,y+b);
            }
            return ans;
        };
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!vis[i][j]&&land[i][j]==0) {
                    v.push_back(dfs(i,j));
                }
            }
        }
        sort(v.begin(), v.end());
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
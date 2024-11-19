#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>v;
    vector<vector<bool>>vb;
    int ans,m,n;
    int dfs(int x,int y,vector<vector<int>>& ma){
        if (vb[x][y])
            return v[x][y];
        vb[x][y]=true;
        if (x<m-1&&ma[x+1][y]<ma[x][y])
            v[x][y]= max(v[x][y], dfs(x+1,y,ma)+1);
        if (x>0&&ma[x-1][y]<ma[x][y])
            v[x][y]= max(v[x][y], dfs(x-1,y,ma)+1);
        if (y>0&&ma[x][y-1]<ma[x][y])
            v[x][y]= max(v[x][y], dfs(x,y-1,ma)+1);
        if (y<n-1&&ma[x][y+1]<ma[x][y])
            v[x][y]= max(v[x][y], dfs(x,y+1,ma)+1);
        ans= max(ans,v[x][y]);
        return v[x][y];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m=matrix.size(),n=matrix[0].size();
        v.assign(m,vector<int>(n,1));
        vb.assign(m,vector<bool>(n,false));
        ans=1;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                dfs(i,j,matrix);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),ans=0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]){
                    ans+=2;
                    if (i==0){
                        ans+=grid[i][j];
                    }else{
                        ans+=max(0,grid[i][j]-grid[i-1][j]);
                    }
                    if (i==m-1){
                        ans+=grid[i][j];
                    }else{
                        ans+=max(0,grid[i][j]-grid[i+1][j]);
                    }
                    if (j==0){
                        ans+=grid[i][j];
                    }else{
                        ans+=max(0,grid[i][j]-grid[i][j-1]);
                    }
                    if (j==n-1){
                        ans+=grid[i][j];
                    }else{
                        ans+=max(0,grid[i][j]-grid[i][j+1]);
                    }
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
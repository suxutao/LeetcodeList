#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),l1=n,l2=0,r1=m,r2=0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]){
                    l1= min(l1,j);
                    l2= max(l2,j);
                    r1= min(r1,i);
                    r2= max(r2,i);
                }
            }
        }
        return (l2-l1+1)*(1+r2-r1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),ans=0,er=1;
        for (int i = 0; i < m; ++i) {
            if (grid[i][0]==0){
                for (int j = 0; j < n; ++j) {
                    grid[i][j]=grid[i][j]?0:1;
                }
            }
        }
        for (int i = n-1; i >= 0; --i) {
            int temp=0;
            for (int j = 0; j < m; ++j) {
                temp+=grid[j][i];
            }
            temp= max(temp,m-temp);
            ans+=temp*er;
            er<<=1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
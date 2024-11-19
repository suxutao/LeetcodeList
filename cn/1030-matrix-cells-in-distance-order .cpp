#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>>ans(rows*cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                ans[i*cols+j]={i,j};
            }
        }
        sort(ans.begin(), ans.end(),[&](vector<int>&a,vector<int>&b){
            return abs(a[0]-rCenter)+ abs(a[1]-cCenter)<abs(b[0]-rCenter)+ abs(b[1]-cCenter);
        });
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
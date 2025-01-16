#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<int>v;
        if (n&1){
            for (int i = 0; i < m; ++i) {
                if (i&1){
                    for (int j = n-2; j >= 0; j-=2) {
                        v.push_back(grid[i][j]);
                    }
                }else{
                    for (int j = 0; j < n; j+=2) {
                        v.push_back(grid[i][j]);
                    }
                }
            }
        }else{
            for (int i = 0; i < m; ++i) {
                if (i&1){
                    for (int j = n-1; j >= 0; j-=2) {
                        v.push_back(grid[i][j]);
                    }
                }else{
                    for (int j = 0; j < n; j+=2) {
                        v.push_back(grid[i][j]);
                    }
                }
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
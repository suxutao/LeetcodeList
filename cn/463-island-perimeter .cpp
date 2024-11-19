#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int sum = 0,cover = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    sum++;
                    if(i - 1 >= 0 && grid[i - 1][j] == 1)
                        cover++;
                    if(j - 1 >= 0 && grid[i][j - 1] == 1)
                        cover++;
                }
            }
        }
        return sum * 4 - cover * 2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0) {
        vector<vector<int>> res;
        vector<pair<int, int>> around = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int x = r0, y = c0, num = 1, dir = 0;
        int Left = c0 - 1, Right = c0 + 1, Upper = r0 - 1, Bottom = r0 + 1;
        while (num <= R * C) {
            if (x >= 0 && x < R && y >= 0 && y < C) {
                res.push_back({x, y});
                num += 1;
            }
            if (dir == 0 && y == Right) {
                dir += 1;
                Right += 1;
            }
            else if (dir == 1 &&  x == Bottom) {
                dir += 1;
                Bottom += 1;
            }
            else if (dir == 2 && y == Left) {
                dir += 1;
                Left--;
            }
            else if (dir == 3 && x == Upper) {
                dir = 0;
                Upper--;
            }
            x += around[dir].first;
            y += around[dir].second;
        }
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
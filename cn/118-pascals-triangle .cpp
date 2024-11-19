#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows==1)
            return {{1}};
        if (numRows==2)
            return {{1},{1,1}};
        vector<vector<int>>vv(numRows);
        for (int i = 0; i < numRows; ++i) {
            vv[i].push_back(1);
        }
        vv[1].push_back(1);
        for (int i = 2; i < numRows; ++i) {
            for (int j = 1; j < i; ++j) {
                vv[i].push_back(vv[i-1][j]+vv[i-1][j-1]);
            }
            vv[i].push_back(1);
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().generate(5);
    return 0;
}
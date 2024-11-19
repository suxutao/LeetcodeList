#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex==0)
            return {1};
        if (rowIndex==1)
            return {1,1};
        rowIndex++;
        vector<vector<int>>vv(rowIndex);
        for (int i = 0; i < rowIndex; ++i) {
            vv[i].push_back(1);
        }
        vv[1].push_back(1);
        for (int i = 2; i < rowIndex; ++i) {
            for (int j = 1; j < i; ++j) {
                vv[i].push_back(vv[i-1][j]+vv[i-1][j-1]);
            }
            vv[i].push_back(1);
        }
        return vv[rowIndex-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
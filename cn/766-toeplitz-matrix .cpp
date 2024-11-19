#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        map<int,int>ma;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!ma[i-j])
                    ma[i-j]=matrix[i][j]+100;
                else if (ma[i-j]!=matrix[i][j]+100)
                    return false;
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for (int i = 0; i < n; ++i) {
            set<int>s,m;
            for (int j = 0; j < n; ++j) {
                s.insert(matrix[i][j]);
                m.insert(matrix[j][i]);
            }
            if (s.size()!=n||m.size()!=n)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
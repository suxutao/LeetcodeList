#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (m*n!=original.size())
            return {};
        vector<vector<int>>v(m,vector<int>(n));
        for (int i = 0; i < original.size(); ++i) {
            v[i/n][i%n]=original[i];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
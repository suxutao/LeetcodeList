#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0;
        for (int i = 0; i < mat.size(); ++i) {
            ans+=mat[i][i]+mat[i][mat.size()-i-1];
        }
        if (mat.size()&1)
            ans-=mat[mat.size()/2][mat.size()/2];
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
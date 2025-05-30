#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        auto check1=[&]()->bool{
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (mat[i][j]!=target[j][n-i-1])
                        return false;
                }
            }
            return true;
        };
        auto check2=[&]()->bool{
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (mat[i][j]!=target[n-i-1][n-j-1])
                        return false;
                }
            }
            return true;
        };
        auto check3=[&]()->bool{
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (mat[j][n-i-1]!=target[i][j])
                        return false;
                }
            }
            return true;
        };
        return mat==target||check1()||check2()||check3();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
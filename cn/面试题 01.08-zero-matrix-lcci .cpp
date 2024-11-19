#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>v1,v2;
        int m=matrix.size(),n=matrix[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j]==0){
                    v1.insert(i);
                    v2.insert(j);
                }
            }
        }
        for (const int &i: v1){
            for (int j = 0; j < n; ++j) {
                matrix[i][j]=0;
            }
        }
        for (const int &i: v2){
            for (int j = 0; j < m; ++j) {
                matrix[j][i]=0;
            }
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
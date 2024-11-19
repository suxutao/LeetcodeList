#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size(),ans=0;
        unordered_set<int>row,col;
        for (int i = 0; i < m; ++i) {
            int cnt=accumulate(mat[i].begin(), mat[i].end(),0);
            if (cnt>1)
                row.insert(i);
        }
        for (int i = 0; i < n; ++i) {
            int cnt=0;
            for (int j = 0; j < m; ++j) {
                cnt+=mat[j][i];
            }
            if (cnt>1)
                col.insert(i);
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j]&&!row.contains(i)&&!col.contains(j))
                    ++ans;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m=boxGrid.size(),n=boxGrid[0].size();
        vector<vector<char>>v(n,vector<char>(m,'.'));
        for (int i = 0; i < m; ++i) {
            int cnt=0;
            for (int j = 0; j < n; ++j) {
                if (boxGrid[i][j]=='#'){
                    cnt++;
                }else if (boxGrid[i][j]=='*'){
                    v[j][m-i-1]='*';
                    for (int k = 1; k <= cnt; ++k) {
                        v[j-k][m-i-1]='#';
                    }
                    cnt=0;
                }
            }
            for (int j = 0; j < cnt; ++j) {
                v[n-1-j][m-i-1]='#';
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
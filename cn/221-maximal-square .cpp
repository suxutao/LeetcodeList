#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size(),n=matrix[0].size(),ans=0;
        vector<vector<int>>v(m+1,vector<int>(n+1,0));
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (matrix[i-1][j-1]=='1'){
                    int a=1+ sqrt(min({v[i-1][j-1],v[i-1][j],v[i][j-1]}));
                    v[i][j]=a*a;
                    ans= max(ans,v[i][j]);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
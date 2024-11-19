#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int uniquePaths(int m, int n) {
        int arr[m+1][n+1];
        for (int i = 0; i < m + 1; ++i) {
            arr[i][0]=1;
        }
        for (int i = 0; i < n + 1; ++i) {
            arr[0][i]=1;
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                arr[i][j]=arr[i][j-1]+arr[i-1][j];
            }
        }
        return arr[m-1][n-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
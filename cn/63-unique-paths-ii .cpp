#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        int arr[m][n];
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (obstacleGrid[i][j])
                    arr[i][j]=0;
                else
                    arr[i][j]=1;
            }
        }
        for (int i = 0; i < m; ++i) {
            if (arr[i][0]==0){
                for (int j = i+1; j < m; ++j) {
                    arr[j][0]=0;
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            if (arr[0][i]==0){
                for (int j = i+1; j < n; ++j) {
                    arr[0][j]=0;
                }
            }
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (arr[i][j])
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
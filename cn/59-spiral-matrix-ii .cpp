#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));
        int arr[n][n],a=1,b=0,x=0,y=0;
        memset(arr,0,sizeof(arr));
        while(a<=n*n){
            switch (b) {
                case 0:
                    arr[x][y++]=a++;
                    if (y>n-1||arr[x][y]){
                        y--;
                        b=1;
                        x++;
                    }
                    break;
                case 1:
                    arr[x++][y]=a++;
                    if (x>n-1||arr[x][y]){
                        x--;
                        b=2;
                        y--;
                    }
                    break;
                case 2:
                    arr[x][y--]=a++;
                    if (y<0||arr[x][y]){
                        y++;
                        b=3;
                        x--;
                    }
                    break;
                case 3:
                    arr[x--][y]=a++;
                    if (x<0||arr[x][y]){
                        x++;
                        b=0;
                        y++;
                    }
                    break;
            }
        }
        for (int i = 0; i < n; ++i) {
            v[i] = vector<int>(arr[i], arr[i] + n);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().generateMatrix(3);
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int integerBreak(int n) {
        int arr[60]={0};
        arr[1]=1;arr[2]=1;arr[3]=2;
        if (n==2)
            return 1;
        if (n==3)
            return 2;
        for (int i = 4; i <= n+1; ++i) {
            for (int j = 1; j < i; ++j) {
                arr[i]=max(arr[i],j*arr[i-j]);
            }
        }
        return arr[n+1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().integerBreak(4);
    return 0;
}
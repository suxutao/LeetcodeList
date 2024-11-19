#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int climbStairs(int n) {
        if (n==1)
            return 1;
        if (n==2)
            return 2;
        int c[n+1];
        c[0]=0;c[1]=1;c[2]=2;
        for (int i = 3; i <= n; ++i) {
            c[i]=c[i-1]+c[i-2];
        }
        return c[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
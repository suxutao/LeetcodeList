#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fib(int n) {
        int f[n+1];
        if (n==0)
            return 0;
        if (n==1)
            return 1;
        f[0]=0;f[1]=1;
        for (int i = 2; i <= n; ++i) {
            f[i]=f[i-1]+f[i-2];
        }
        return f[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    cout<<Solution().fib(3)<<endl;
    return 0;
}
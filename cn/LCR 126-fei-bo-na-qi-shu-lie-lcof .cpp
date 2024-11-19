#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fib(int n) {
        if (n==0)
            return 0;
        if (n==1)
            return 1;
        long long arr[n+1];
        arr[0]=0;arr[1]=1;
        for (int i = 2; i < n + 1; ++i) {
            arr[i]=(arr[i-1]+arr[i-2])%1000000007;
        }
        return arr[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
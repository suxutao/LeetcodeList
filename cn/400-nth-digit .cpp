#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findNthDigit(int n) {
        long long a=1,b=1,c,d,ans,N=n;
        while (N>=0){
            N-=a*9*b;
            a++;b*=10;
        }
        a--;b/=10;N+=a*9*b;
        c=ceil((double)N/a),d=N%a;
        ans=c+b-1;
        d=d==0?a:d;
        for (int i = 0; i < a - d; ++i) {
            ans /= 10;
        }
        return ans%10;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
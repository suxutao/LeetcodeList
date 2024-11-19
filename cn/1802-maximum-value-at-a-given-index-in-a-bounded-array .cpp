#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        long long l=1,r=maxSum+1,mid;
        auto check=[&](long long x){
            long long sum=-x;
            if (x>index+1)
                sum+=(2*x-index)*(index+1)/2;
            else
                sum+=(x+1)*x/2+index+1-x;
            if (x>n-index)
                sum+=(2*x-n+index+1)*(n-index)/2;
            else
                sum+=(x+1)*x/2+n-index-x;
            return sum<=maxSum;
        };
        while (l<r){
            mid=(l+r)>>1;
            if (check(mid))
                l=mid+1;
            else
                r=mid;
        }
        return l-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int smallestValue(int n) {
        int sum=0,temp=n;
        while (sum<temp){
            sum=0;temp=n;
            for (int i = 2; i*i <= n; ++i) {
                if (n%i==0){
                    while (n%i==0)
                        n/=i,sum+=i;
                }
            }
            if (n>1)
                sum+=n;
            n=sum;
        }
        return sum;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
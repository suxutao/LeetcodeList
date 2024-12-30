#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSteps(int n) {
        int ans=0;
        for (int i = 2; i*i <= n; ++i) {
            while (n%i==0){
                n/=i;
                ans+=i;
            }
        }
        if (n>1)
            ans+=n;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
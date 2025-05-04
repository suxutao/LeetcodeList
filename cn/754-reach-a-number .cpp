#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int reachNumber(int target) {
        int ans=0,sum=0,i;
        target=abs(target);
        for (i = 1; sum < target; ++i) {
            sum+=i;
            ++ans;
        }
        if ((sum-target)%2==0)
            return ans;
        else if (i&1)
            return ans+1;
        else
            return ans+2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
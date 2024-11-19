#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPerfectSquare(int num) {
        typedef long long ll;
        if (num==1)
            return true;
        int l=1,r=num;
        while(l<=r){
            ll middle=((ll)l+(ll)r)/2;
            ll sqrt_my=(ll)middle* (ll)middle;
            if (sqrt_my==num)
                return true;
            else if (sqrt_my<num)
                l=middle+1;
            else
                r=middle-1;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().isPerfectSquare(104976);
    return 0;
}
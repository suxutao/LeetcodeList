#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(int n) {
        if (n==1)
            return 0;
        int zhong=n+1,ans=0;
        for (int i = 1; i < 2*n+1; i+=2) {
            ans+= abs(zhong-i);
        }
        return ans/2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
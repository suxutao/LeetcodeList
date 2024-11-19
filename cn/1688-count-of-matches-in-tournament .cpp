#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numberOfMatches(int n) {
        int ans=0;
        while (n!=1){
            if (n&1)
                ans+=(n-1)/2;
            else
                ans+=n/2;
            n= ceil(n/2.0);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
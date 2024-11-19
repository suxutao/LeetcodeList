#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=0;
        while (start||goal){
            ans+=(start&1)^(goal&1);
            start>>=1;
            goal>>=1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
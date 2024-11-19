#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int ans=0;
        while (target!=startValue){
            if (target&1||target<startValue){
                target++;
            }else{
                target>>=1;
            }
            ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
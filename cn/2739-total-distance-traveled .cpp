#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ans=0;
        while (mainTank>=5){
            ans+=5;
            mainTank-=5;
            if (additionalTank){
                additionalTank--;
                mainTank++;
            }
        }
        ans+=mainTank;
        return ans*10;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
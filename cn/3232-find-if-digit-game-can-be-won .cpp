#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int o=0,t=0,sum=0;
        for (auto &i: nums){
            if (i/100==0){
                if (i/10==0)
                    o+=i;
                else
                    t+=i;
            }
            sum+=i;
        }
        return o*2>sum||t*2>sum;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> missingTwo(vector<int>& nums) {
        int n=nums.size()+2,yi=0,a=0,b=0;
        for (int i = 1; i <= n; ++i) {
            yi^=i;
        }
        for (auto &i: nums){
            yi^=i;
        }
        int low=yi&-yi;
        for (int i = 1; i <= n; ++i) {
            if (i&low){
                a^=i;
            }else{
                b^=i;
            }
        }
        for (auto &i: nums){
            if (i&low){
                a^=i;
            }else{
                b^=i;
            }
        }
        return {a,b};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
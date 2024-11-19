#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for (auto &i: nums){
            if (i==0)
                return 0;
            else if (i<0)
                ans=-ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
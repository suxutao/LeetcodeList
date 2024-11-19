#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans=0,sum=0;
        for (auto &item: nums){
            sum+=item;
            if (sum<0)
                ans= min(ans,sum);
        }
        return 1-ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
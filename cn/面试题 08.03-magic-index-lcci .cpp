#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findMagicIndex(vector<int>& nums) {
        int ans=-1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]==i){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
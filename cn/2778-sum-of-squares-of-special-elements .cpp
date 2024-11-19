#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans=0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums.size()%(i+1)==0)
                ans+=nums[i]*nums[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
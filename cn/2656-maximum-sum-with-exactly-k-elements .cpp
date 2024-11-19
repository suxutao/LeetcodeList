#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int MAX=*max_element(nums.begin(),nums.end());
        int ans=0;
        for (int i = 0; i < k; ++i) {
            ans+=MAX++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
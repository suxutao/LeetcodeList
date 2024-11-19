#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int ans=0;
        for (int i = 0; i < 31; ++i) {
            int temp=0;
            for (int j = 0; j < nums.size(); ++j) {
                temp+=bool((1<<i)&nums[j]);
            }
            if (temp>=k)
                ans+=1<<i;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
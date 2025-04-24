#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int ans=1,mx=nums[0],n=nums.size();
        for (int i = 1; i < n; ++i) {
            if (nums[i]>=mx){
                ans++;
                mx=nums[i];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
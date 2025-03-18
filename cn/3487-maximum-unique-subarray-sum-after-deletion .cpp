#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSum(vector<int>& nums) {
        int ans=0,mx=ranges::max(nums);
        if (mx<0)
            return mx;
        unordered_set<int>s(nums.begin(),nums.end());
        for (auto &item: s)
            if (item>0)
                ans+=item;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
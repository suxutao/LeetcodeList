#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=nums.size();
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i+1; j < nums.size(); ++j) {
                unordered_set<int>s;
                for (int k = i; k <= j; ++k) {
                    s.insert(nums[k]);
                }
                ans=(ans+s.size()*s.size())%1000000007;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n= unique(nums.begin(),nums.end())-nums.begin();
        ll d=0;
        for (int i = 0; i < n; ++i) {
            if (nums[i]<=k){
                ++k;
                d+=nums[i];
            }
        }
        return (ll)k*(k+1)/2-d;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
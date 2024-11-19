#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        int n=nums.size();
        ll sum=0;
        for (int i = 0; i < n; ++i) {
            if (nums[i]&1)
                nums[i]=-nums[i];
            if (target[i]&1)
                target[i]=-target[i];
        }
        std::sort(nums.begin(), nums.end());
        std::sort(target.begin(), target.end());
        for (int i = 0; i < n; ++i) {
            sum+=abs(nums[i]-target[i]);
        }
        return sum/4;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
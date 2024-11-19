#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,0);
        for (int i = 0; i < n; ++i) {
            if (1<=nums[i]&&nums[i]<=n)
                v[nums[i]-1]++;
        }
        for (int i = 0; i < n; ++i) {
            if (v[i]==0)
                return i+1;
        }
        return n+1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
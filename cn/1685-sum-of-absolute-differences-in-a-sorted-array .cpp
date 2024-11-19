#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n),v(n+1);
        for (int i = 0; i < n; ++i) {
            v[i+1]=v[i]+nums[i];
        }
        for (int i = 0; i < n; ++i) {
            ans[i]=nums[i]*i-v[i]+v[n]-v[i+1]-nums[i]*(n-i-1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
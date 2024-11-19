#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(n-k+1,-1),v(n,1);
        for (int i = 1; i < n; ++i) {
            if (nums[i]==nums[i-1]+1)
                v[i]=1+v[i-1];
        }
        for (int i = k-1; i < n; ++i) {
            if (v[i]>=k)
                ans[i-k+1]=nums[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
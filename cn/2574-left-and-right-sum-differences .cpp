#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>l(n);
        vector<int>r(n);
        vector<int>ans(n);
        l[0]=r[n-1]=0;
        for (int i = 1; i < n; ++i) {
            l[i]=l[i-1]+nums[i-1];
        }
        for (int i = n-2; i >= 0; --i) {
            r[i]=r[i+1]+nums[i+1];
        }
        for (int i = 0; i < n; ++i) {
            ans[i]= abs(l[i]-r[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
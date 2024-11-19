#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool f(vector<int>&v,int l,int k){
        for (int i = l; i < l + k-1; ++i) {
            if (v[i+1]-v[i]!=1)
                return false;
        }
        return true;
    }
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(n-k+1,-1);
        for (int i = 0; i < n - k + 1; ++i) {
            if (f(nums,i,k))
                ans[i]=nums[i+k-1];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
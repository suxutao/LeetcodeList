#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(k);
        vector<pii>vp;
        for (int i = 0; i < n; ++i) {
            vp.push_back({nums[i], i});
        }
        std::sort(vp.begin(), vp.end(),greater<>());
        std::sort(vp.begin(), vp.begin()+k,[](pii&a,pii&b){
            return a.second<b.second;
        });
        for (int i = 0; i < k; ++i) {
            ans[i]=vp[i].first;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
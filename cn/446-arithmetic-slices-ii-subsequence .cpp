#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int numberOfArithmeticSlices(vector<int>& nums) {
        ll n=nums.size(),ans=0;
        vector<unordered_map<ll,ll>>v(n);
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                ll d=(ll)nums[i]-nums[j];
                if (v[j].contains(d)){
                    v[i][d]+=v[j][d]+1;
                    ans+=v[j][d];
                }else{
                    v[i][d]++;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
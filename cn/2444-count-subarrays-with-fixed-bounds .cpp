#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n=nums.size(),mn=-1,mx=-1,l=-1;
        ll ans=0;
        for (int i = 0; i < n; ++i) {
            if (nums[i]<minK||nums[i]>maxK){
                l=i;
            }
            if (nums[i]==maxK){
                mx=i;
            }
            if (nums[i]==minK){
                mn=i;
            }
            if (mn>l&&mx>l){
                ans+= min(mn,mx)-l;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
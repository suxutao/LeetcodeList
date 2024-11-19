#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    map<int,int>ma;
    long long maxSum(vector<int>& nums, int m, int k) {
        ll ans=0;
        vector<ll>sum(nums.size()+1);
        for (int i = 0; i < nums.size(); ++i) {
            sum[i+1]=sum[i]+(ll)nums[i];
        }
        for (int i = 0; i < k; ++i) {
            ma[nums[i]]++;
        }
        if (ma.size()>=m){
            ans=sum[k];
        }
        for (int i = k; i < nums.size(); ++i) {
            ll temp=sum[i+1]-sum[i-k+1];
            ma[nums[i]]++;
            ma[nums[i-k]]--;
            if (!ma[nums[i-k]])
                ma.erase(nums[i-k]);
            if (temp>ans&&ma.size()>=m){
                ans=temp;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
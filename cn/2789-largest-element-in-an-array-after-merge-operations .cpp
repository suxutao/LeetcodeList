#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxArrayValue(vector<int>& nums) {
        if (nums.size()==1)
            return nums[0];
        vector<ll>v(nums.begin(),nums.end());
        ll ans= *max_element(nums.begin(), nums.end());
        for (int i=nums.size()-1;i>0;--i){
            if (v[i]>=v[i-1]){
                ll temp=v[i]+v[i-1];
                v.pop_back();v.pop_back();
                v.push_back(temp);
                ans= max(ans,temp);
            }else{
                v.pop_back();
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
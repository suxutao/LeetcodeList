#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long numberOfSubarrays(vector<int>& nums) {
        ll n=nums.size(),ans=n;
        stack<pair<ll,ll>>st;
        for (int i = 0; i < nums.size(); ++i) {
            while (!st.empty()&&nums[st.top().first]<nums[i]){
                st.pop();
            }
            if (st.empty()){
                st.emplace(i,1);
            }else{
                if (nums[st.top().first]==nums[i])
                    ans+=st.top().second++;
                else
                    st.emplace(i,1);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long findMaximumScore(vector<int>& nums) {
        ll n=nums.size(),ans=0,j=0;
        vector<int>v(n,-1);
        stack<int>st;
        for (int i = n-1; i >= 0; --i) {
            while (!st.empty()&&nums[st.top()]<=nums[i]){
                st.pop();
            }
            if (!st.empty())
                v[i]=st.top();
            st.push(i);
        }
        while (j<n-1) {
            if (~v[j]){
                ans+=nums[j]*(v[j]-j);
                j=v[j];
            }else{
                ans+=nums[j]*(n-1-j);
                break;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{1,3,1,5};
    Solution().findMaximumScore(v);
    return 0;
}
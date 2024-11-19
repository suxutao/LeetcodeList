#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    int minOperations(vector<int>& nums, int k) {
        priority_queue<ll,vector<ll>,greater<>>q(nums.begin(),nums.end());
        ll ans=0;
        while (q.top()<k){
            ll a=q.top();q.pop();
            ll b=q.top();q.pop();
            q.push(min(a,b)*2+ max(a,b));
            ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
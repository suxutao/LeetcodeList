#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxKelements(vector<int>& nums, int k) {
        ll ans=0;
        priority_queue<int>q(nums.begin(),nums.end());
        for (int i = 0; i < k; ++i) {
            ll temp=q.top();
            ans+=temp;
            q.pop();
            q.push(ceil(temp/3.));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
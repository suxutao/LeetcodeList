#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<>>q(nums.begin(),nums.end());
        for (int i = 0; i < k; ++i) {
            int t=q.top();q.pop();
            q.push(++t);
        }
        ll ans=1;
        while (!q.empty()){
            ans=(ans*q.top())%N;
            q.pop();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
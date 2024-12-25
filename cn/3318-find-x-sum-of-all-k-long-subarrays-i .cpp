#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int>ans(n-k+1);
        for (int i = 0; i <= n - k; ++i) {
            priority_queue<pii>q;
            unordered_map<int,int>m;
            for (int j = i; j < i+k; ++j) {
                ++m[nums[j]];
            }
            for (auto &item: m){
                q.push({item.second,item.first});
            }
            for (int j = 0; j < x&&!q.empty(); ++j) {
                auto [a,b]=q.top();
                q.pop();
                ans[i]+=a*b;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
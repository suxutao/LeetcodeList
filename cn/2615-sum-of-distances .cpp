#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    vector<long long> distance(vector<int>& nums) {
        unordered_map<int,vector<ll>>m;
        vector<ll>ans(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            m[nums[i]].push_back(i);
        }
        for (auto &[_,v]: m){
            vector<ll>t(v.size()+1);
            for (int i = 0; i < v.size(); ++i) {
                t[i+1]=t[i]+v[i];
            }
            for (int i = 0; i < v.size(); ++i) {
                ans[v[i]]=i*v[i]-t[i]+t[v.size()]-t[i+1]-v[i]*(v.size()-i-1);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
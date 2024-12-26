#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        vector<pair<int,int>>v;
        vector<int>ans;
        for (auto &item: nums){
            ++m[item];
        }
        for (auto &[a,b]: m){
            v.push_back({b,a});
        }
        sort(v.begin(), v.end(),greater<>());
        for (int i = 0; i < k; ++i) {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
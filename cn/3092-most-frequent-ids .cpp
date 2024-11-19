#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        int n=nums.size();
        multiset<ll>s;
        unordered_map<int,ll>m;
        vector<ll>v(n);
        for (int i = 0; i < n; ++i) {
            auto pos=s.find(m[nums[i]]);
            if (pos!=s.end())
                s.erase(pos);
            m[nums[i]]+=freq[i];
            s.insert(m[nums[i]]);
            v[i]=*s.rbegin();
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
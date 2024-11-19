#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    using pii = array<int,4>;
    struct com{
        bool operator()(pii&a,pii&b){
            return a[2]+a[3]>b[2]+b[3];
        }
    };
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        unordered_set<ll>m{0};
        vector<vector<int>>v;
        priority_queue<pii,vector<pii>,com>q;
        q.push({0,0,nums1[0],nums2[0]});
        for (int i = 0; i < k&&!q.empty(); ++i) {
            auto a=q.top();q.pop();
            v.push_back({a[2],a[3]});
            if (a[0]+1<nums1.size()&&!m.contains((ll)(a[0]+1)<<32|a[1])){
                q.push({a[0]+1,a[1],nums1[a[0]+1],nums2[a[1]]});
                m.insert((ll)(a[0]+1)<<32|a[1]);
            }
            if (a[1]+1<nums2.size()&&!m.contains((ll)a[0]<<32|(a[1]+1))){
                q.push({a[0],a[1]+1,nums1[a[0]],nums2[a[1]+1]});
                m.insert((ll)a[0]<<32|(a[1]+1));
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
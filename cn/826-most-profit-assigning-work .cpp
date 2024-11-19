#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n=difficulty.size(),ans=0;
        vector<pii>v(n);vector<int>MAX(n);
        for (int i = 0; i < n; ++i) {
            v[i]={difficulty[i],profit[i]};
        }
        sort(v.begin(), v.end());
        MAX[0]=v[0].second;
        for (int i = 1; i < n; ++i) {
            MAX[i]=max(MAX[i-1],v[i].second);
        }
        for (auto &i: worker){
            auto a= upper_bound(v.begin(), v.end(), make_pair(i,INT_MAX));
            if (a!=v.begin())
                ans+=MAX[a-v.begin()-1];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>a={2,4,6,8,10},b={10,20,30,40,50},c={4,5,6,7};
    Solution().maxProfitAssignment(a,b,c);
    return 0;
}
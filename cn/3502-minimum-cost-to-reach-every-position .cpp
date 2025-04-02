#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n=cost.size(),a=INT_MAX;
        vector<int>ans(n);
        for (int i = 0; i < n; ++i) {
            a= min(a,cost[i]);
            ans[i]=a;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n=items.size(),nq=queries.size();
        vector<int>ans(nq);
        ranges::sort(items);
        for (int i = 1; i < n; ++i) {
            items[i][1]= max(items[i-1][1],items[i][1]);
        }
        for (int i = 0; i < nq; ++i) {
            int it= upper_bound(items.begin(), items.end(),vector<int>{queries[i]+1})-items.begin();
            if (it){
                ans[i]= items[it-1][1];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
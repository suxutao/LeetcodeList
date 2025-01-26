#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>v;
        vector<vector<int>>ans;
        ranges::sort(candidates);
        auto dfs=[&](auto&&dfs,int pos,int sum)->void {
            if (sum==target){
                ans.push_back(v);
                return;
            }
            for (int i = pos; i < n; ++i) {
                if (candidates[i]+sum>target)
                    break;
                if (i>pos&&candidates[i]==candidates[i-1])
                    continue;
                v.push_back(candidates[i]);
                dfs(dfs,i+1,sum+candidates[i]);
                v.pop_back();
            }
        };
        dfs(dfs,0,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}
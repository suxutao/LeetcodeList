#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int n;
    vector<int>v;
    vector<vector<int>>vv;
    void dfs(vector<int>&can,int pos,int target){
        if (target==0){
            vv.push_back(v);
            return;
        }
        if (pos==n){
            return;
        }
        for (int i = pos; i < n; ++i) {
            if (can[i]>target)
                break;
            if (i!=pos&&can[i]==can[i-1])
                continue;
            v.push_back(can[i]);
            dfs(can,i+1,target-can[i]);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        n=candidates.size();
        std::sort(candidates.begin(), candidates.end());
        dfs(candidates,0,target);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
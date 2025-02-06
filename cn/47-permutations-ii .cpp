#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool vis[10]{};
    vector<int>v;
    vector<vector<int>>vv;
    void hui(vector<int>&nums){
        int n=nums.size();
        if (v.size()==n){
            vv.push_back(v);
            return;
        }
        for (int i = 0; i < n; ++i) {
            if (!vis[i]){
                if (i&&nums[i]==nums[i-1]&&!vis[i-1])
                    continue;
                vis[i]=1;
                v.push_back(nums[i]);
                hui(nums);
                v.pop_back();
                vis[i]=0;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        ranges::sort(nums);
        hui(nums);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
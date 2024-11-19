#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>vv;
    vector<int>v;
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();vv.push_back({});
        for (int i = 1; i < (1 << n); ++i) {
            v.clear();
            for (int j = 0; j < n; ++j) {
                if ((i>>j)&1){
                    v.push_back(nums[j]);
                }
            }
            vv.push_back(v);
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
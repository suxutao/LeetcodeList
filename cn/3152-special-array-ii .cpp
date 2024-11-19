#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool>v(queries.size());
        vector<int>cnt(nums.size());
        for (auto &item: nums){
            item&=1;
        }
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i]==nums[i-1]){
                cnt[i]=cnt[i-1]+1;
            }else{
                cnt[i]=cnt[i-1];
            }
        }
        for (int i = 0; i < queries.size(); ++i) {
            v[i]=cnt[queries[i][0]]==cnt[queries[i][1]];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={2,8,10,9};vector<vector<int>>q={{1,3}};
    Solution().isArraySpecial(v,q);
    return 0;
}
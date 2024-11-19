#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size(),m=queries.size();
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; ++i) {
            nums[i]+=nums[i-1];
        }
        vector<int>v(m);
        for (int i = 0; i < m; ++i) {
            v[i]=upper_bound(nums.begin(), nums.end(),queries[i])-nums.begin();
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
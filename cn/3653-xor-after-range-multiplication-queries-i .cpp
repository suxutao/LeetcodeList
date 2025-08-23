#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size(),nq=queries.size(),ans=0;
        for (int i = 0; i < nq; ++i) {
            auto&v=queries[i];
            for (int j = v[0]; j <= v[1]; j+=v[2]) {
                nums[j]=(long long)nums[j]*v[3]%N;
            }
        }
        for (int i = 0; i < n; ++i) {
            ans^=nums[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
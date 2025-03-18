#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        if(all_of(nums.begin(), nums.end(),[](int x){return x==0;})){
            return 0;
        }
        int n=nums.size(),nq=queries.size();
        vector<bitset<1005>>v(n,1);
        auto check=[&]()->bool{
            for (int i = 0; i < n; ++i) {
                if (!v[i][nums[i]])
                    return false;
            }
            return true;
        };
        for (int i = 0; i < nq; ++i) {
            auto&q=queries[i];
            for (int j = q[0]; j <= q[1]; ++j) {
                if (!v[j][nums[j]]){
                    v[j]|=v[j]<<q[2];
                }
            }
            if (check())
                return i+1;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
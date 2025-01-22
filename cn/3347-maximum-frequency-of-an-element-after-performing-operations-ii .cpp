#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        int sum=0,ans=0;
        unordered_map<int,int>m;
        map<int,int>diff;
        for (auto &i: nums){
            ++m[i];
            diff[i];
            ++diff[i-k];
            --diff[i+k+1];
        }
        for (auto &[x,d]: diff){
            sum+=d;
            ans= max(ans, min(sum,m[x]+numOperations));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
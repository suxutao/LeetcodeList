#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long subArrayRanges(vector<int>& nums) {
        stack<ll>big,small;
        vector<ll>da(nums.size()),xiao(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            while (!big.empty()&&nums[big.top()]<=nums[i]){
                big.pop();
            }
            while (!small.empty()&&nums[small.top()]>=nums[i]){
                small.pop();
            }
            if (big.empty())
                da[i]=(ll)nums[i]*(i+1);
            else
                da[i]=(ll)nums[i]*(i-big.top())+da[big.top()];
            if (small.empty())
                xiao[i]=(ll)nums[i]*(i+1);
            else
                xiao[i]=(ll)nums[i]*(i-small.top())+xiao[small.top()];
            big.push(i);
            small.push(i);
        }
        return accumulate(da.begin(), da.end(),0ll)-accumulate(xiao.begin(), xiao.end(),0ll);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
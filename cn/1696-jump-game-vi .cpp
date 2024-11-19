#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        deque<int>d;
        vector<int>v(nums.size());
        d.emplace_back(0);
        v[0]=nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            while (!d.empty()&&d.front()<i-k)
                d.pop_front();
            v[i]=v[d.front()]+nums[i];
            while (!d.empty()&&v[i]>=v[d.back()])
                d.pop_back();
            d.emplace_back(i);
        }
        return v[v.size()-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
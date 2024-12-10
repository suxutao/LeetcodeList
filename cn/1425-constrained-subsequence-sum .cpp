#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int>q;
        q.push_back(0);
        for (int i = 1; i < n; ++i) {
            while (!q.empty()&&i-q.front()>k)
                q.pop_front();
            nums[i]+=max(0,nums[q.front()]);
            while (!q.empty()&&nums[q.back()]<=nums[i])
                q.pop_back();
            q.push_back(i);
        }
        return ranges::max(nums);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
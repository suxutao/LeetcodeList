#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<int>s;
        int ans=0,n=nums.size();
        s.push(0);
        for (int i = 1; i < n; ++i) {
            if (nums[i]<nums[s.top()])
                s.push(i);
        }
        for (int i = n-1; i >= 0; --i) {
            while (!s.empty()&&nums[s.top()]<=nums[i]){
                ans= max(ans,i-s.top());
                s.pop();
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
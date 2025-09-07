#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long bowlSubarrays(vector<int>& nums) {
        ll n=nums.size(),ans=0;
        stack<int>s;
        for (int i = 0; i < n; ++i) {
            while (!s.empty()&&nums[s.top()]<nums[i]){
                if (i-s.top()>1)
                    ans++;
                s.pop();
            }
            if (!s.empty()&&i-s.top()>1)
                ans++;
            s.push(i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
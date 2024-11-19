#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    typedef long long ll;
    priority_queue<ll,vector<ll>,greater<>>q;
    int magicTower(vector<int>& nums) {
        ll sum=0,ans=0,ans1=0;
        for (int i = 0; i < nums.size(); ++i) {
            sum+=nums[i];
            if (nums[i]<=0)
                q.push(nums[i]);
            ans+=nums[i];
            while (!q.empty()&&ans<0){
                ans-=q.top();q.pop();
                ans1++;
            }
        }
        if (sum<0)
            return -1;
        return ans1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
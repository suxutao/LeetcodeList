#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int prime[100005]{},vis[1000005]{0,1};
    int minOperations(vector<int>& nums) {
        int n=nums.size(),mx=ranges::max(nums),cnt=0,ans=0;
        for (int i = 2; i <= mx; ++i) {
            if (!vis[i]){
                vis[i]=i;
                prime[cnt++]=i;
            }
            for (int j = 0; j < cnt; ++j) {
                if (prime[j]*i>mx) break;
                vis[i*prime[j]]=prime[j];
                if (i%prime[j]==0) break;
            }
        }
        for (int i = n - 2; i >= 0; --i) {
            if (nums[i]>nums[i+1]){
                nums[i]=vis[nums[i]];
                if (nums[i]>nums[i+1])
                    return -1;
                ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
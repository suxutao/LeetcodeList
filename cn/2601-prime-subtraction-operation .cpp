#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int prime[1001]{};
    bool vis[1001]{};
    bool primeSubOperation(vector<int>& nums) {
        int cnt=0,MIN=0;
        for (int i = 2; i <= 1000; ++i) {
            if (!vis[i])
                prime[cnt++]=i;
            for (int j = 0; j < cnt; ++j) {
                if (i*prime[j]>1000) break;
                vis[i*prime[j]]=1;
                if (i%prime[j]==0) break;
            }
        }
        reverse(prime,prime+cnt);
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]<=MIN)
                return false;
            int*t=upper_bound(prime,prime+cnt,nums[i],greater<>());
            for (int j = t-prime; j <= 1000 ; ++j) {
                if (MIN<nums[i]-prime[j]||prime[j]==0){
                    MIN=nums[i]-prime[j];
                    break;
                }
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
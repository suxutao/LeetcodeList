#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool vis[200005]={};
    int countDifferentSubsequenceGCDs(vector<int>& nums) {
        int ans=0,MAX=*max_element(nums.begin(), nums.end());
        for (auto &item: nums){
            vis[item]=1;
        }
        for (int i = 1; i <= MAX; ++i) {
            int GCD=0;
            for (int j = i; j <= MAX; j+=i) {
                if (vis[j]){
                    if (!GCD)
                        GCD=j;
                    else
                        GCD=__gcd(GCD,j);
                    if (GCD==i){
                        ++ans;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
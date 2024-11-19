#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool vis[4005]{1};
    int maxTotalReward(vector<int>& rewardValues) {
        int n=rewardValues.size();
        sort(rewardValues.begin(), rewardValues.end());
        for (int i = 0; i < n; ++i) {
            for (int j = rewardValues[i]-1; j >= 0; --j) {
                vis[j+rewardValues[i]]|=vis[j];
            }
        }
        for (int i = 4000; i ; --i) {
            if (vis[i])
                return i;
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
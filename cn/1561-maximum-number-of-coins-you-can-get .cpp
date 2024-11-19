#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans=0,x=piles.size()/3;
        std::sort(piles.begin(), piles.end(),greater<>());
        for (int i = 0; i < x; ++i) {
            ans+=piles[2*i+1];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
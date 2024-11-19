#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxJump(vector<int>& stones) {
        int ans=0,n=stones.size();
        for (int i = 1; i < n; i+=2) {
            ans= max(ans,stones[i]-stones[max(0,i-2)]);
        }
        for (int i = 2; i < n; i+=2) {
            ans= max(ans,stones[i]-stones[i-2]);
        }
        ans= max(ans, stones[n-1]-stones[n-2]);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
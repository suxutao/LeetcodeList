#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(), special.end());
        int n=special.size(),ans=0;
        for (int i = 0; i < n - 1; ++i) {
            ans= max(ans,special[i+1]-special[i]-1);
        }
        ans= max(ans, max(special[0]-bottom,top-special[n-1]));
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
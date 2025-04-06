#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int pre=0,dp=0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='0'){
                ++pre;
            }else if (pre){
                dp= max(dp+1,pre);
            }
        }
        return dp;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        for (int i = 0; i < s.size() - 1; ++i) {
            ans+= abs(s[i]-s[i+1]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
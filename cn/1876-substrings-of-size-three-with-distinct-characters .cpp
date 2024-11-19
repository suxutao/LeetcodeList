#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countGoodSubstrings(string s) {
        if (s.size()<3)
            return 0;
        int ans=0;
        for (int i = 0; i < s.size() - 2; ++i) {
            if (s[i]!=s[i+1]&&s[i]!=s[i+2]&&s[i+1]!=s[i+2])
                ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
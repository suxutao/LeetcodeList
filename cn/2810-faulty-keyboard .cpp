#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string finalString(string s) {
        string ans;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='i')
                std::reverse(ans.begin(), ans.end());
            else
                ans+= s[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
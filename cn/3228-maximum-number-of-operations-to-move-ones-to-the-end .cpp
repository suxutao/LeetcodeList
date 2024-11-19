#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxOperations(string s) {
        int ans=0,cnt=0;
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='1')
                ans+=cnt;
            else {
                if (!(i&&s[i-1]=='0'))
                    ++cnt;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
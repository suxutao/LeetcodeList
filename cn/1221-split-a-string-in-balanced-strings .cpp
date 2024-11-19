#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0,cnt=0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='R')
                cnt++;
            else
                cnt--;
            if (cnt==0)
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
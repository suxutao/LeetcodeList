#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int alternateDigitSum(int n) {
        string s=to_string(n);
        int ans=0;
        for (int i = 0; i < s.size(); ++i) {
            if (i&1)
                ans-=s[i]-'0';
            else
                ans+=s[i]-'0';
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
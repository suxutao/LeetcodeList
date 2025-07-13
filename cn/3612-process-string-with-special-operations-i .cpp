#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string processStr(string s) {
        int n=s.size();
        string ans;
        for (int i = 0; i < n; ++i) {
            if (s[i]=='*'){
                if (!ans.empty())
                    ans.pop_back();
            }else if (s[i]=='#'){
                ans+=ans;
            }else if (s[i]=='%'){
                ranges::reverse(ans);
            }else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
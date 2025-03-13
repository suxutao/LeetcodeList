#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int cnt=0;
        string ans;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i]!='-'){
                cnt++;
                ans.push_back(toupper(s[i]));
                if (cnt==k){
                    cnt=0;
                    ans.push_back('-');
                }
            }
        }
        if (ans.empty())
            return "";
        if (ans.back()=='-')
            ans.pop_back();
        ranges::reverse(ans);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
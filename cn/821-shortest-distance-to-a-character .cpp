#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>v,ans(s.size(),INT_MAX);
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]==c)
                v.push_back(i);
        }
        for (int i = 0; i < s.size(); ++i) {
            auto i1=lower_bound(v.begin(), v.end(),i);
            auto i2=lower_bound(v.rbegin(), v.rend(),i,greater<>());
            if (i1!=v.end())
                ans[i]= min(ans[i], abs(*i1-i));
            if (i2!=v.rend())
                ans[i]= min(ans[i], abs(*i2-i));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
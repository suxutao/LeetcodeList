#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n=s.size(),ans=1;
        vector<int>v(n,1);
        for (int i = 1; i < n; ++i) {
            if (s[i]==s[i-1]+1){
                v[i]=1+v[i-1];
                ans= max(ans,v[i]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
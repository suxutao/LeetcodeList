#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestIdealString(string s, int k) {
        int cnt[26]{},n=s.size(),ans=1;
        for (int i = 0; i < n; ++i) {
            int MAX=0;
            for (int j = max<int>('a',s[i]-k); j <= min<int>('z',s[i]+k); ++j) {
                MAX=max(MAX,cnt[j-'a']+1);
            }
            cnt[s[i]-'a']=MAX;
            ans=max(ans,cnt[s[i]-'a']);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().longestIdealString("abcd",3);
    return 0;
}
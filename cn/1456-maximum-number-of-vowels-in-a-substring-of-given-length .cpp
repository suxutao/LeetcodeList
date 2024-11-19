#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxVowels(string s, int k) {
        int ans,n=s.size(),cnt=0;
        unordered_set<char>v={'a','e','i','o','u'};
        for (int i = 0; i < k; ++i) {
            if (v.contains(s[i])){
                ++cnt;
            }
        }
        ans=cnt;
        for (int i = k; i < n; ++i) {
            cnt+=v.contains(s[i]);
            cnt-=v.contains(s[i-k]);
            ans= max(ans,cnt);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
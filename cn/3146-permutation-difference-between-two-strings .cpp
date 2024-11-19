#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findPermutationDifference(string s, string t) {
        char a[26],b[26];
        int ans=0;
        for (int i = 0; i < s.size(); ++i) {
            a[s[i]-'a']=i;
            b[t[i]-'a']=i;
        }
        for (int i = 0; i < 26; ++i) {
            ans+= abs(a[i]-b[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
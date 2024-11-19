#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n=s.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            for (int l = 1; l <= n - i; ++l) {
                string temp=s.substr(i,l);
                int cnt=count(temp.begin(), temp.end(),'0');
                if (cnt<=k||l-cnt<=k)
                    ++ans;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countAsterisks(string s) {
        int ans=0,shu=0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i]=='|')
                shu++;
            else if (s[i]=='*'){
                if (!(shu&1))
                    ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
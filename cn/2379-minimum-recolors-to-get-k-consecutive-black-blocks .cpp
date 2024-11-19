#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int a=0,ans=0;
        for (int i = 0; i < k; ++i) {
            a+=blocks[i]=='B';
        }
        ans=a;
        for (int i = k; i < blocks.size(); ++i) {
            a+=blocks[i]=='B';
            a-=blocks[i-k]=='B';
            ans= max(a,ans);
        }
        return k-ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
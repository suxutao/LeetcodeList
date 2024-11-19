#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumBuckets(string hamsters) {
        int n=hamsters.size(),ans=0;
        if (n==1)
            return hamsters[0]=='H'?-1:0;
        if (hamsters[0]=='H'&&hamsters[1]=='H')
            return -1;
        if (hamsters[n-1]=='H'&&hamsters[n-2]=='H')
            return -1;
        for (int i = 0; i < n - 2; ++i) {
            if (hamsters[i]=='H'&&hamsters[i+1]=='H'&&hamsters[i+2]=='H')
                return -1;
        }
        for (int i = 0; i < n; ++i) {
            if (hamsters[i]=='H'){
                if (i&&hamsters[i-1]=='*')
                    continue;
                if (i+1<n&&hamsters[i+1]=='.'){
                    hamsters[i+1]='*';
                }
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
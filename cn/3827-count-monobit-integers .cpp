#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool pan(int x){
        int t=x&1;
        while (x){
            if ((x&1)!=t)
                return false;
            x>>=1;
        }
        return true;
    }
    int countMonobit(int n) {
        int ans=1;
        for (int i = 1; i <= n; ++i) {
            ans+= pan(i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
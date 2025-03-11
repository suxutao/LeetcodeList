#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lastRemaining(int n) {
        int ans=1,k=0,cnt=n,step=1;
        while (cnt>1){
            if (k&1){
                ans=(cnt%2==0)?ans:ans+step;
            }else{
                ans+=step;
            }
            ++k;
            cnt>>=1;
            step<<=1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int totalMoney(int n) {
        int ans=0,cnt,pre=0;
        for (int i = 0; i < n; ++i) {
            if (i%7==0){
                pre++;
                cnt=pre;
            }else{
                cnt++;
            }
            ans+=cnt;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
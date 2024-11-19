#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int sum=1,add=2,cnt=1,ans=0;
        while (sum<=n){
            if ((n-sum)%cnt==0)
                ans++;
            sum+=add++;
            cnt++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
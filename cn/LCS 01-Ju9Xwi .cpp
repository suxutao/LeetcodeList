#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int leastMinutes(int n) {
        int ab=1,ans=INT_MAX,time=0;
        while (ab<=n){
            ans= min<int>(ans,time+ceil((double)n/ab));
            time++;
            ab<<=1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
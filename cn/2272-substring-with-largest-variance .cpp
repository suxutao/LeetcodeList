#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int largestVariance(string s) {
        int ans=0;
        for (char i = 'a'; i <= 'z'; ++i) {
            for (char j = 'a'; j <= 'z'; ++j) {
                if (i==j)
                    continue;
                int l0=0,l1=INT_MIN/2;
                for (char&k:s) {
                    if (k==i){
                        l0= max(l0,0)+1;
                        l1++;
                    }else if (k==j){
                        l1=l0=max(l0,0)-1;
                    }
                    ans= max(ans,l1);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
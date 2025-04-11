#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumBoxes(int n) {
        int ans=0,r=1;
        while (n){
            for (int i = 1; i <= r&&n; ++i) {
                if (n>i){
                    n-=i;
                    ans++;
                }else{
                    ans++;
                    n=0;
                }
            }
            r++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
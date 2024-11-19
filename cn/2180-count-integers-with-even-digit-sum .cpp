#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countEven(int num) {
        int ans=0;
        for (int i = 1; i <= num; ++i) {
            int sum=0;
            for (int j = i; j; j/=10) {
                sum+=j%10;
            }
            ans+=sum%2==0;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
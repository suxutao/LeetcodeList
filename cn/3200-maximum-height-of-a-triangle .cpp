#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int a,b,c=red,d=blue;
        for (a = 0; c>=0&&d>=0; ++a) {
            if (a&1){
                c-=a+1;
            }else{
                d-=a+1;
            }
        }
        c=red,d=blue;
        for (b = 0; c>=0&&d>=0; ++b) {
            if (b&1){
                d-=b+1;
            }else{
                c-=b+1;
            }
        }
        return max(a,b)-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
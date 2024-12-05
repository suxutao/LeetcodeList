#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        if (a==e){
            if (a!=c)
                return 1;
            if (d>b&&d<f||d>f&&d<b)
                return 2;
            return 1;
        }
        if (b==f){
            if (b!=d)
                return 1;
            if (c>a&&c<e||c>e&&c<a)
                return 2;
            return 1;
        }
        if (c-d==e-f){
            if (a-b!=c-d)
                return 1;
            if (a>c&&a<e||a<c&&a>e)
                return 2;
            return 1;
        }
        if (c+d==e+f){
            if (a+b!=c+d)
                return 1;
            if (a>c&&a<e||a<c&&a>e)
                return 2;
            return 1;
        }
        return 2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
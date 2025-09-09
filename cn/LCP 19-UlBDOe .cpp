#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumOperations(string leaves) {
        int n=leaves.size(),f1=INT_MAX/2,f2=INT_MAX/2,f3=INT_MAX/2;
        for (int i = 0; i < n; ++i) {
            f3= min(f3,f2)+(leaves[i]=='y');
            f2= min(f2,f1)+(leaves[i]=='r');
            if(f1==INT_MAX/2)
                f1=(leaves[i]=='y');
            else
                f1+=(leaves[i]=='y');
        }
        return f3;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
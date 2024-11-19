#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string baseNeg2(int n) {
        if (n==0)
            return "0";
        string ans;
        while (n){
            int m=n%(-2);
            n/=(-2);
            if (m==-1){
                n++;
                m=1;
            }
            ans.push_back('0'+m);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
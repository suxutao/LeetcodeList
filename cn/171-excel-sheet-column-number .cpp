#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        for (int i = 0; i < columnTitle.size(); ++i) {
            ans=ans*26-'A'+columnTitle[i]+1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
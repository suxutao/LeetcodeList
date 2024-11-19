#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n=derived.size(),yi=0;
        for (int i = 0; i < n; ++i) {
            yi^=derived[i];
        }
        return yi==0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
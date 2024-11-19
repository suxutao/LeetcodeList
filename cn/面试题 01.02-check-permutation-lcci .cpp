#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        std::sort(s1.begin(), s1.end());
        std::sort(s2.begin(), s2.end());
        return s1==s2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
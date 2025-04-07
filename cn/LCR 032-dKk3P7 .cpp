#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s==t)
            return false;
        ranges::sort(s);
        ranges::sort(t);
        return s==t;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
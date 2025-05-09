#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxProduct(int n) {
        string s=to_string(n);
        ranges::sort(s,greater<>());
        return (s[0]-'0')*(s[1]-'0');
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string dynamicPassword(string password, int target) {
        reverse(password.begin(),password.begin()+target);
        reverse(password.begin()+target,password.end());
        reverse(password.begin(),password.end());
        return password;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
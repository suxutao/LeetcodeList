#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isSameAfterReversals(int num) {
        string s=to_string(num);
        reverse(s.begin(), s.end());
        int a= stoi(s);
        s=to_string(a);
        reverse(s.begin(), s.end());
        return stoi(s)==num;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
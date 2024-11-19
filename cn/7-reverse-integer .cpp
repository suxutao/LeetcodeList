#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int reverse(int x) {
        bool zhengshu= true;
        if (x==-2147483648)
            return 0;
        if (x<0){
            zhengshu= false;
            x=-x;
        }
        string s=to_string(x);
        std::reverse(s.begin(), s.end());
        if (s.length()>=10&&zhengshu&&s>"2147483647")
            return 0;
        if (s.length()>=10&&!zhengshu&&s>"2147483648")
            return 0;
        if (zhengshu)
            return stoi(s);
        else
            return stoi("-"+s);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
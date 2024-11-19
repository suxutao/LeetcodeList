#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumSum(int num) {
        string s=to_string(num);
        std::sort(s.begin(), s.end());
        int a= (s[0]-48)*10+s[3],b=(s[1]-48)*10+s[2];
        return a+b-96;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
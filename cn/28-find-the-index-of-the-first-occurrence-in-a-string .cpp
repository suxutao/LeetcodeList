#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:

    int strStr(string haystack, string needle) {
        if (needle.length()>haystack.length())
            return -1;
        int n=needle.length();
        for (int i = 0; i <= haystack.length()-n; ++i) {
            if (haystack.substr(i,n)==needle)
                return i;
        }
        return -1;
    }

};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().strStr("a","a");
    return 0;
}
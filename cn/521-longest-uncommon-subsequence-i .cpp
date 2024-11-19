#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findLUSlength(string a, string b) {
        if (a.length()!=b.length())
            return max(a.length(),b.length());
        return a==b?-1:a.length();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
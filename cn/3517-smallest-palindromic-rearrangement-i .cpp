#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        string t=s.substr(0,n/2);
        sort(t.begin(), t.end());
        string t2=t;
        std::reverse(t2.begin(), t2.end());
        if (n&1)
            return t+s[n/2]+t2;
        return t+t2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
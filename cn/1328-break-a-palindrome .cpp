#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.size();
        if (n==1)
            return "";
        for (int i = 0; i < n / 2; ++i) {
            if (palindrome[i]!='a'){
                palindrome[i]='a';
                return palindrome;
            }
        }
        palindrome.back()='b';
        return palindrome;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
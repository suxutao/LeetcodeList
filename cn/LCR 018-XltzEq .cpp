#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(),s.begin(),::tolower);
        int l=0,r=s.size()-1;
        while (l<r){
            while (l<r&&!islower(s[l])&&!isdigit(s[l]))
                ++l;
            while (l<r&&!islower(s[r])&&!isdigit(s[r]))
                --r;
            if (s[l]!=s[r])
                return false;
            ++l;--r;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
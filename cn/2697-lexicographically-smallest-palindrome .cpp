#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string makeSmallestPalindrome(string s) {
        if (s.length()==1)
            return s;
        int l=0,r=s.length()-1;
        while (l<r){
            if (s[l]==s[r]){
                l++;r--;
            }else{
                char c= min(s[l],s[r]);
                s[l]=s[r]=c;
                l++;r--;
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
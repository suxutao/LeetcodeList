#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removePalindromeSub(string s) {
        int l=0,r=s.size()-1;
        while (l<r){
            if (s[l]==s[r]){
                l++;r--;
            }else{
                return 2;
            }
        }
        return 1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumLength(string s) {
        int n=s.size(),l=0,r=n-1;
        while (l<=r){
            if (l==r)
                break;
            char temp=s[l];
            if (s[r]!=s[l])
                break;
            while (l<=r&&s[l]==temp)
                ++l;
            while (l<=r&&s[r]==temp)
                --r;
        }
        return r-l+1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
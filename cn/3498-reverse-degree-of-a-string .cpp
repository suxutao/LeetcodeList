#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            ans+=(i+1)*('z'-s[i]+1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
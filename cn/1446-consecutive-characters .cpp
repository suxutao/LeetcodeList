#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxPower(string s) {
        int ans=1,n=s.size(),cnt=1;
        for (int i = 1; i < n; ++i) {
            if (s[i]==s[i-1]){
                cnt++;
                ans= max(ans,cnt);
            }else{
                cnt=1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
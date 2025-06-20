#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size(),l=0,ans=0,cost=0;
        for (int r = 0; r < n; ++r) {
            cost+=abs(s[r]-t[r]);
            while (cost>maxCost){
                cost-=abs(s[l]-t[l]);
                ++l;
            }
            ans= max(ans,r-l+1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
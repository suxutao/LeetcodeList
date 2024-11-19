#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSwaps(string s) {
        int ans=INT_MAX,a1=0,a2=0,n=s.size();
        for (int i = 0; i < n; ++i) {
            if (s[i]=='1')
                ++a1;
            else
                ++a2;
        }
        if (abs(a1-a2)>1)
            return -1;
        if (a1 == (n + 1) / 2 && a2 == n / 2){
            int t=0;
            for (int i = 0; i < n; ++i){
                if (s[i] - '0' == i % 2){
                    ++t;
                }
            }
            ans= min(ans,t/2);
        }
        if (a2 == (n + 1) / 2 && a1 == n / 2){
            int t=0;
            for (int i = 0; i < n; ++i){
                if (s[i] - '0' != i % 2){
                    ++t;
                }
            }
            ans= min(ans,t/2);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
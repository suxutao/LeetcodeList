#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size(),ans=0,MAX;
        vector<int>pre(n),suf(n);
        pre.front()=customers[0]=='N';
        suf.back()=customers[n-1]=='Y';
        for (int i = 1; i < n; ++i) {
            pre[i]=pre[i-1];
            pre[i]+=customers[i]=='N';
        }
        for (int i = n-2; i >= 0; --i) {
            suf[i]=suf[i+1];
            suf[i]+=customers[i]=='Y';
        }
        MAX=suf[0];
        for (int i = 1; i < n; ++i) {
            if (pre[i-1]+suf[i]<MAX){
                MAX=pre[i-1]+suf[i];
                ans=i;
            }
        }
        if (pre[n-1]<MAX){
            ans=n;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().bestClosingTime("YYYY");
    return 0;
}
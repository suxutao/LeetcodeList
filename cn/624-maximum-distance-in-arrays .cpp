#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        int n=arr.size(),ans=0;
        vector<int>mx_pre(n),mx_suf(n),mn_pre(n),mn_suf(n);
        mx_pre[0]=arr[0].back();
        mn_pre[0]=arr[0][0];
        mx_suf.back()=arr.back().back();
        mn_suf.back()=arr.back()[0];
        for (int i = 1; i < n; ++i) {
            mx_pre[i]=max(mx_pre[i-1],arr[i].back());
            mn_pre[i]=min(mn_pre[i-1],arr[i][0]);
        }
        for (int i = n - 2; i >= 0; --i) {
            mx_suf[i]= max(mx_suf[i+1],arr[i].back());
            mn_suf[i]= min(mn_suf[i+1],arr[i][0]);
        }
        for (int i = 1; i < n-1; ++i) {
            int a= max(mx_pre[i]-mn_suf[i+1],mx_suf[i]-mn_pre[i-1]);
            ans= max(ans,a);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
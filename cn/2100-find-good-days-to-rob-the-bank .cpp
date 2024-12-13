#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        int n=security.size();
        vector<int>v,pre(n,1),suf(n,1);
        if (time==0){
            for (int i = 0; i < n; ++i) {
                v.push_back(i);
            }
            return v;
        }
        for (int i = 1; i < n; ++i) {
            if (security[i]<=security[i-1])
                pre[i]=pre[i-1]+1;
        }
        for (int i = n-2; i >= 0; --i) {
            if (security[i]<=security[i+1])
                suf[i]=suf[i+1]+1;
        }
        for (int i = time; i < n-time; ++i) {
            if (pre[i]>=time+1&&suf[i]>=time+1){
                v.push_back(i);
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{5,3,3,3,5,6,2};
    Solution().goodDaysToRobBank(v,2);
    return 0;
}
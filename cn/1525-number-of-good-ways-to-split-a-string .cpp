#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numSplits(string s) {
        int n=s.size(),arr[26]{},ans=0;
        vector<int>pre(n),suf(n);
        for (int i = 0; i < n; ++i) {
            arr[s[i]-'a']++;
            if (i) pre[i]=pre[i-1];
            if (arr[s[i]-'a']==1)
                pre[i]++;
        }
        memset(arr,0, sizeof arr);
        for (int i = n-1; i >= 0; --i) {
            arr[s[i]-'a']++;
            if (i!=n-1) suf[i]=suf[i+1];
            if (arr[s[i]-'a']==1)
                suf[i]++;
        }
        for (int i = 0; i < n-1; ++i) {
            if (pre[i]==suf[i+1])
                ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
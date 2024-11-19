#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int balancedString(string s) {
        int n=s.size(),ans=n,l=0,r=0,m=n/4;
        unordered_map<char,int>c;
        for (auto &i: s)
            ++c[i];
        if (c['Q'] == m && c['W'] == m && c['E'] == m && c['R'] == m)
            return 0;
        while (r<n){
            --c[s[r]];
            while (c['Q']<=m&&c['W']<=m&&c['E']<=m&&c['R']<=m){
                ans= min(ans,r-l+1);
                ++c[s[l++]];
            }
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countSubstrings(string s) {
        int ans=0,n=s.length();
        vector<vector<bool>>v(n,vector<bool>(n));
        for (int i = 0; i < n; ++i) {
            v[i][i]=1;
            ans++;
        }
        for (int i = 0; i < n - 1; ++i) {
            if (s[i]==s[i+1]) {
                v[i][i + 1] = 1;
                ans++;
            }
        }
        for (int l = 3; l <= n; ++l) {
            for (int i = 0; i < n - l + 1; ++i) {
                if (s[i]==s[i+l-1]&&v[i+1][i+l-2]){
                    v[i][i+l-1]=1;
                    ans++;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numDistinct(string s, string t) {
        typedef unsigned long long ull;
        vector<vector<ull>>v(s.length()+1,vector<ull>(t.length()+1,0));
        for (int i = 0; i <= s.length(); ++i) {
            v[i][0]=1;
        }
        for (int i = 1; i <= s.length(); ++i) {
            for (int j = 1; j <= t.length(); ++j) {
                if (s[i - 1] == t[j - 1]) {
                    v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
                } else {
                    v[i][j] = v[i - 1][j];
                }
            }
        }
        return v[s.length()][t.length()];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
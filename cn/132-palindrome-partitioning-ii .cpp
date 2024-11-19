#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minCut(string s) {
        vector<int>v(s.size(),0);
        vector<vector<bool>>b(s.size(),vector<bool>(s.size(),false));
        for (int i = s.size() - 1; i >= 0; i--) {
            for (int j = i; j < s.size(); j++) {
                if (s[i] == s[j] && (j - i <= 1 || b[i + 1][j - 1])) {
                    b[i][j] = true;
                }
            }
        }
        for (int i = 0; i < s.size(); i++)
            v[i] = i;
        for (int i = 1; i < s.size(); i++) {
            if (b[0][i]) {
                v[i] = 0;
                continue;
            }
            for (int j = 0; j < i; j++) {
                if (b[j + 1][i]) {
                    v[i] = min(v[i], v[j] + 1);
                }
            }
        }
        return v[s.size() - 1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isMatch(string s, string p) {
        if (p=="*")
            return true;
        if (s==""){
            for (int i = 0; i < p.size(); ++i) {
                if (p[i]!='*')
                    return false;
            }
            return true;
        }
        vector<vector<bool>>v(s.size()+1,vector<bool>(p.size()+1,false));
        v[0][0]=true;
        for (int i = 0; i < p.size(); ++i) {
            if (p[i]=='*'){
                for (int j = 0; j <= s.size(); ++j) {
                    v[j][i+1]=true;
                }
            }else break;
        }
        for (int i = 1; i <= s.size(); ++i) {
            for (int j = 1; j <= p.size(); ++j) {
                if (s[i-1]==p[j-1]||p[j-1]=='?'){
                    v[i][j]=v[i-1][j-1];
                }else if (p[j-1]=='*'){
                    for (int k = 0; k <= i; ++k) {
                        if (v[k][j-1])
                            v[i][j]=true;
                    }
                }
            }
        }
        return v[s.size()][p.size()];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
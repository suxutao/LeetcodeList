#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        vector<vector<int>>v(s.size(),vector<int>(s.size(),0));
        for (int i = 0; i < s.size(); ++i) {
            v[i][i]=1;
        }
        for (int i = s.size()-1; i >= 0; --i) {
            for (int j = i+1; j < s.size(); ++j) {
                if (s[i]==s[j])
                    v[i][j]=v[i+1][j-1]+2;
                else
                    v[i][j]= max(v[i+1][j],v[i][j-1]);
            }
        }
        return v[0][s.size()-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
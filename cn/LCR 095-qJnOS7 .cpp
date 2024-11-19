#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>vv(text1.length()+1,vector<int>(text2.size()+1,0));
        for (int i = 1; i < text1.length()+1; ++i) {
            for (int j = 1; j < text2.size()+1; ++j) {
                if (text1[i-1]==text2[j-1])
                    vv[i][j]=1+vv[i-1][j-1];
                else
                    vv[i][j]= max(vv[i-1][j],vv[i][j-1]);
            }
        }
        return vv[text1.length()][text2.length()];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
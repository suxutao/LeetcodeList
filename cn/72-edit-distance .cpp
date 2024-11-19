#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minDistance(string word1, string word2) {
        if (word1.empty()&&word2.empty())
            return 0;
        else if (word1.empty()||word2.empty()){
            if (word1.empty())
                return word2.size();
            else
                return word1.size();
        }
        vector<vector<int>>vv(word1.size()+1,vector<int>(word2.size()+1));
        for (int i = 0; i <= word1.size(); ++i) {
            vv[i][0]=i;
        }
        for (int i = 0; i <= word2.size(); ++i) {
            vv[0][i]=i;
        }
        for (int i = 1; i <= word1.size(); ++i) {
            for (int j = 1; j <= word2.size(); ++j) {
                if (word1[i-1]==word2[j-1])
                    vv[i][j]=vv[i-1][j-1];
                else
                    vv[i][j]= min(min(1+vv[i-1][j],1+vv[i][j-1]),vv[i-1][j-1]+1);
            }
        }
        return vv[word1.size()][word2.size()];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
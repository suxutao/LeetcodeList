#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>>v(word1.size()+1,vector<int>(word2.size()+1));
        for (int i = 0; i <= word1.size(); ++i) {
            v[i][0]=i;
        }
        for (int i = 0; i <= word2.size(); ++i) {
            v[0][i]=i;
        }
        for (int i = 1; i <= word1.size(); ++i) {
            for (int j = 1; j <= word2.size(); ++j) {
                if (word1[i-1]==word2[j-1])
                    v[i][j]=v[i-1][j-1];
                else
                    v[i][j]= min(v[i-1][j]+1,1+v[i][j-1]);
            }
        }
        return v[word1.size()][word2.size()];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
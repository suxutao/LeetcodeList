#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        bool bian= false;
        if (word1.size()>word2.size()) {
            swap(word1, word2);
            bian= true;
        }
        string ans;
        for (int i = 0; i < word1.size(); ++i) {
            if (bian){
                ans.push_back(word2[i]);
                ans.push_back(word1[i]);
            }else{
                ans.push_back(word1[i]);
                ans.push_back(word2[i]);
            }
        }
        ans+=word2.substr(word1.size());
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
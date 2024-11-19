#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string rowIdx = "12210111011122000010020202";
        for (auto & word : words) {
            bool isValid = true;
            char idx = rowIdx[tolower(word[0]) - 'a'];
            for (int i = 1; i < word.size(); ++i) {
                if(rowIdx[tolower(word[i]) - 'a'] != idx) {
                    isValid = false;
                    break;
                }
            }
            if (isValid) {
                ans.emplace_back(word);
            }
        }
        return ans;
    }
};

//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>v;
        for (int i = 0; i < words.size(); ++i) {
            if (find(words[i].begin(),words[i].end(),x)!=words[i].end())
                v.push_back(i);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string answerString(string word, int numFriends) {
        if (numFriends==1)
            return word;
        int n=word.size();
        string ans;
        for (int i = 0; i < n; ++i) {
            string t;
            for (int j = i; j < n; ++j) {
                t.push_back(word[j]);
                if (j-i>=n-numFriends){
                    break;
                }
            }
            ans= max(ans,t);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
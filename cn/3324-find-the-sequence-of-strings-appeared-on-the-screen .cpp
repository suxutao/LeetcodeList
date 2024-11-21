#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string>vs;
        string s;
        for (int i = 0; i < target.size(); ++i) {
            s.push_back('a'-1);
            for (int j = 'a'; j <= target[i]; ++j) {
                s.back()++;
                vs.push_back(s);
            }
        }
        return vs;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
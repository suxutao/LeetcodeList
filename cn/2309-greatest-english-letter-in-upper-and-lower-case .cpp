#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char>se;
        char ans='?';
        for (int i = 0; i < s.size(); ++i) {
            se.insert(s[i]);
            char t= toupper(s[i]);
            if (t>ans&&se.contains(t)&&se.contains(t+32))
                ans=t;
        }
        return ans=='?'?"":string(1,ans);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
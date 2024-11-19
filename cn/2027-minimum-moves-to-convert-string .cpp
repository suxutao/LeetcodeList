#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumMoves(string s) {
        int ans=0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='X'){
                ++ans;
                if (i+1<s.size())
                    s[i+1]='O';
                if (i+2<s.size())
                    s[i+2]='0';
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
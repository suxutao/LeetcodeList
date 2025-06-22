#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkOnesSegment(string s) {
        int cnt=s[0]=='1',n=s.size();
        for (int i = 1; i < n; ++i) {
            if (s[i]=='1'&&s[i-1]!='1')
                cnt++;
            if (cnt>1)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
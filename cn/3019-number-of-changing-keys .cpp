#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countKeyChanges(string s) {
        transform(s.begin(), s.end(),s.begin(),::tolower);
        int ans=0;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i]!=s[i-1])
                ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
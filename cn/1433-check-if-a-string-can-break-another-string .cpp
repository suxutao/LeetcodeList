#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        std::sort(s1.begin(), s1.end(),greater<>());
        std::sort(s2.begin(), s2.end(),greater<>());
        if (s1<s2)
            swap(s1,s2);
        for (int i = 0; i < s1.size(); ++i) {
            if (s1[i]<s2[i])
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto t=upper_bound(letters.begin(), letters.end(),target);
        return t!=letters.end()?*t:letters[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
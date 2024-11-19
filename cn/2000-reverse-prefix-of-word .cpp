#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos=word.find(ch);
        std::reverse(word.begin(), word.begin()+pos+1);
        return word;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
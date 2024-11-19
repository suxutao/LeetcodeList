#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isCircularSentence(string sentence) {
        if (sentence.front()!=sentence.back())
            return false;
        int pos;
        while (sentence.find(' ',pos)!=string::npos){
            pos=sentence.find(' ',pos)+1;
            if (sentence[pos-2]!=sentence[pos])
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
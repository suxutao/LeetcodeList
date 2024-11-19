#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string replaceSpaces(string S, int length) {
        S.resize(length);
        while (S.find(' ')!=string::npos){
            S.replace(S.find(' '),1,"%20");
        }
        return S;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
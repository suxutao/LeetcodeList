#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size()==1)
            return true;
        if (islower(word.front())){
            for (int i = 1; i < word.size(); ++i) {
                if (isupper(word[i]))
                    return false;
            }
        }else{
            if (islower(word[1])){
                for (int i = 2; i < word.size(); ++i) {
                    if (isupper(word[i]))
                        return false;
                }
            }else{
                for (int i = 2; i < word.size(); ++i) {
                    if (islower(word[i]))
                        return false;
                }
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
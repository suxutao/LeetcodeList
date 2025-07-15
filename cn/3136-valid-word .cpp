#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isValid(string word) {
        int n=word.size();
        if (n<3)
            return false;
        bool yuan= false,fu= false;
        unordered_set<char>s{'a','e','i','o','u'};
        for (int i = 0; i < n; ++i) {
            word[i]=tolower(word[i]);
            if (!islower(word[i])&&!isdigit(word[i]))
                return false;
            if (islower(word[i])){
                if (s.contains(word[i])){
                    yuan= true;
                }else{
                    fu= true;
                }
            }
        }
        return yuan&&fu;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
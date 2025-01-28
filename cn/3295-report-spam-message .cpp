#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_set<string>s(bannedWords.begin(),bannedWords.end());
        bool tong= false;
        for (auto &i: message){
            if (s.contains(i)){
                if (tong)
                    return true;
                else
                    tong= true;
            }
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
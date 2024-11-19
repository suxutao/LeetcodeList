#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int>m;
        for (auto &i: word1){
            ++m[i];
        }
        for (auto &i: word2){
            --m[i];
        }
        for (auto &[a,b]: m){
            if (abs(b)>3)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<char,int>m;
    bool canPermutePalindrome(string s) {
        int qi=0;
        for (char c:s) {
            m[c]++;
        }
        for (const auto &item: m){
            if (item.second&1)
                qi++;
            if (qi==2)
                break;
        }
        return qi<=1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
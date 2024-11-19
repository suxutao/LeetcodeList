#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>m;
        int ans=0;bool dan= false;
        for (auto &i: s){
            ++m[i];
        }
        for (auto &[_,a]: m){
            ans+=a&1?a-1:a;
            if (a&1)
                dan= true;
        }
        return ans+dan;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
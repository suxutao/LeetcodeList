#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long countVowels(string word) {
        ll n=word.size(),ans=0;
        set<char>s{'a','e','i','o','u'};
        for (int i = 0; i < word.size(); ++i) {
            if (s.contains(word[i]))
                ans+=(i+1)*(n-i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        set<char>s={'a','e','i','o','u'};
        int ans=0;
        for (int i = left; i <= right; ++i) {
            if (s.contains(words[i][0])&&s.contains(words[i].back()))
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
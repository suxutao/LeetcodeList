#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int ans=0;
        for (auto&i:words) {
            if (i.size()<=s.size()&&s.substr(0,i.size())==i)
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
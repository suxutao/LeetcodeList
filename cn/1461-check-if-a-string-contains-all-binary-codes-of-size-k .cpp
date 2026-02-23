#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.size();
        unordered_set<string>se;
        for (int i = 0; i <= n - k; ++i) {
            se.insert(s.substr(i,k));
        }
        return se.size()==(1<<k);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
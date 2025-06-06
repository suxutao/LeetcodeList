#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int secondHighest(string s) {
        int n=s.size();
        set<int>se;
        for (int i = 0; i < n; ++i) {
            if (isdigit(s[i]))
                se.insert(s[i]-'0');
        }
        if (se.size()<2)
            return -1;
        return *(++se.rbegin());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
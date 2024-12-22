#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumSwap(string s1, string s2) {
        string t1,t2;
        for (int i = 0; i < s1.size(); ++i) {
            if (s1[i]!=s2[i]){
                t1.push_back(s1[i]);
                t2.push_back(s2[i]);
            }
        }
        int n=t1.size();
        if (n&1)
            return -1;
        int cnt1=count(t1.begin(), t1.end(),'x'),cnt2=count(t1.begin(), t1.end(),'y');
        if (cnt1&1)
            return cnt1/2+cnt2/2+2;
        else
            return cnt1/2+cnt2/2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
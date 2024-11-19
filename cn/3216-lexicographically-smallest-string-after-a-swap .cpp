#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string getSmallestString(string s) {
        int n=s.size();
        for (int i = 0; i < n-1; ++i) {
            if ((s[i]&1)==(s[i+1]&1)&&s[i]>s[i+1]){
                swap(s[i],s[i+1]);
                break;
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
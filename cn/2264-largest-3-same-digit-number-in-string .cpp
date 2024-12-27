#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string largestGoodInteger(string num) {
        char c='0'-1;
        int n=num.size();
        string ans;
        for (int i = 0; i < n - 2; ++i) {
            string t=num.substr(i,3);
            if (t[0]==t[1]&&t[0]==t[2]&&t[0]>c){
                c=t[0];
                ans=t;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
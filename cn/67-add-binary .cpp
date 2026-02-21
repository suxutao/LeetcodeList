#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string addBinary(string a, string b) {
        int na=a.size()-1,nb=b.size()-1,jin=0;
        string ans;
        while (na>=0||nb>=0||jin){
            int A=na>=0?a[na]-'0':0;
            int B=nb>=0?b[nb]-'0':0;
            int add=A+B+jin;
            jin=add/2;
            ans.push_back('0'+(add&1));
            na--;nb--;
        }
        ranges::reverse(ans);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
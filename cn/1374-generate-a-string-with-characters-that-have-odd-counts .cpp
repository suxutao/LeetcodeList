#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string generateTheString(int n) {
        if (n==1)
            return "a";
        string s;
        s.push_back('a');
        if (n&1){
            s.push_back('z');
            s.append(n-2,'b');
        }else{
            s.append(n-1,'b');
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
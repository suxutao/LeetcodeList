#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string reverseStr(string s, int k) {
        int a=s.length()/(2*k);
        int b=s.length()%(2*k);
        for (int i = 0; i < a; ++i) {
            reverse(s.begin()+i*k*2,s.begin()+i*k*2+k);
        }
        if (b<k){
            reverse(s.rbegin(),s.rbegin()+b);
        }else{
            reverse(s.rbegin()+b-k,s.rbegin()+b);
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
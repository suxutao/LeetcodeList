#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.begin(), s.end(),greater<>());
        for (int i=s.size()-1;i>=0;i--){
            if (s[i]=='1'){
                swap(s[i],s[s.size()-1]);
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
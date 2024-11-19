#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s=to_string(n);
        int a=s.length();
        for(int i=s.length()-1;i>0;i--){
            if (s[i]<s[i-1]){
                a=i;
                s[i-1]--;
            }
        }
        for (int i = a; i < s.length(); ++i) {
            s[i]='9';
        }
        return stoi(s);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
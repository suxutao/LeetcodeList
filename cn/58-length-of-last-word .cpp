#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int a=s.length()-1;
        while(s[a]==' ') a--;;
        while((a+1)&&s[a]!=' ') {a--;count++;}
        return count;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
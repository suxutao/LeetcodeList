#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
        int a,b,c;
        do{
            a = rand7();
            b = rand7();
            c=a+(b-1)*7;
        } while (c>40);
        return 1+(c-1)%10;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
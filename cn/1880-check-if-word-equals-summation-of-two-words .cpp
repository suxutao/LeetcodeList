#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int a=0,b=0,c=0;
        for (char&i:firstWord) {
            a*=10;
            a+=i-'a';
        }for (char&i:secondWord) {
            b*=10;
            b+=i-'a';
        }for (char&i:targetWord) {
            c*=10;
            c+=i-'a';
        }
        return c==a+b;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
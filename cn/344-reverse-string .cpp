#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void reverseString(vector<char>& s) {
        int a=0,b=s.size()-1;
        while(a<b){
            swap(s[a],s[b]);
            a++;b--;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
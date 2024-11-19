#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    char repeatedCharacter(string s) {
        int arr['z'+1]={0};
        for (char c:s) {
            if (arr[c])
                return c;
            arr[c]=1;
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
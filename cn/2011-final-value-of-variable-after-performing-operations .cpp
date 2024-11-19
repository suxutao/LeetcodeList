#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for (const auto &i: operations){
            if (i[1]=='+')
                x++;
            else
                x--;
        }
        return x;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
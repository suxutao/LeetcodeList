#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    char dismantlingAction(string arr) {
        map<char,int>m;
        for (auto &item: arr)
            ++m[item];
        for (auto &item: arr)
            if (m[item]==1)
                return item;
        return ' ';
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
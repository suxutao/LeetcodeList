#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<char,int>m;
    bool judgeCircle(string moves) {
        for (const auto &item: moves){
            m[item]++;
        }
        return m['L']==m['R']&&m['U']==m['D'];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
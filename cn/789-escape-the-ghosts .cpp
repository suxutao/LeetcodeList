#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int dis= abs(target[0])+ abs(target[1]);
        for (auto &i: ghosts){
            int d= abs(target[0]-i[0])+ abs(target[1]-i[1]);
            if (d<=dis)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
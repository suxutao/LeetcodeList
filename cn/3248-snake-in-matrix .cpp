#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int x=0,y=0;
        for (auto &i: commands){
            if (i[0]=='R') y++;
            else if (i[0]=='L') y--;
            else if (i[0]=='U') x--;
            else x++;
        }
        return x*n+y;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
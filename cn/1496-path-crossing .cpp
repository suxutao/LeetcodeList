#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0,y=0,n=path.size();
        map<pair<int,int>,bool>m;
        m[{0,0}]=1;
        for (int i = 0; i < n; ++i) {
            if (path[i]=='N'){
                y++;
            }else if (path[i]=='S'){
                y--;
            }else if (path[i]=='E'){
                x++;
            }else{
                x--;
            }
            if (m.contains({x,y}))
                return true;
            m[{x,y}]=1;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}
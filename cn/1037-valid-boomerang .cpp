#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isBoomerang(vector<vector<int>>& p) {
        if (p[0]==p[1]||p[0]==p[2]||p[1]==p[2])
            return false;
        if (p[0][0]==p[1][0]&&p[0][0]==p[2][0]||p[0][1]==p[1][1]&&p[0][1]==p[2][1])
            return false;
        pair<double,double>p1{p[1][0]-p[0][0],p[1][1]-p[0][1]};
        pair<double,double>p2{p[2][0]-p[0][0],p[2][1]-p[0][1]};
        return p2.first/p1.first!=p2.second/p1.second;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
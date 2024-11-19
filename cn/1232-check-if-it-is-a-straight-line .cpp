#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool check(vector<vector<int>>& c,int w){
        int b=c[0][w];
        for (auto &item: c){
            if (item[w]!=b)
                return false;
        }
        return true;
    }
    bool checkStraightLine(vector<vector<int>>& c) {
        if (check(c,0))
            return true;
        if (check(c,1))
            return true;
        double a=(double)(c[0][0]-c[1][0])/(c[0][1]-c[1][1]);
        for (int i = 2; i < c.size(); ++i) {
            if ((double)(c[0][0]-c[i][0])/(c[0][1]-c[i][1])!=a)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
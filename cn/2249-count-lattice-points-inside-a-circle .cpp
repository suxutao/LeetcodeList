#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        int ans=0;
        for (int i = 0; i <= 200; ++i) {
            for (int j = 0; j <= 200; ++j) {
                for (auto &v: circles){
                    int dis=(v[0]-i)*(v[0]-i)+(v[1]-j)*(v[1]-j);
                    if (dis<=v[2]*v[2]){
                        ++ans;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
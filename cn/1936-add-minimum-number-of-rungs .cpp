#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int ans=0;
        rungs.insert(rungs.begin(),0);
        for (int i = 1; i < rungs.size(); ++i) {
            ans+=ceil((rungs[i]-rungs[i-1]-dist)/(double)dist);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
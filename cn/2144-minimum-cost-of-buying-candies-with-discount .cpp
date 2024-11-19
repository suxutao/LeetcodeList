#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        std::sort(cost.begin(), cost.end(),greater<>());
        int ans=0,i;
        for (i = 0; i+2 < cost.size(); i+=3) {
            ans+=cost[i]+cost[i+1];
        }
        if (i<cost.size()){
            ans+=cost[i++];
            if (i<cost.size())
                ans+=cost[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int n=weight.size(),ans=0;
        for (int i = n - 2; i >= 0; --i) {
            if (weight[i]>weight[i+1]){
                ans++;i--;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
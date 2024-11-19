#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int arr[cost.size()+1];
        arr[0]=0;arr[1]=0;
        for (int i = 2; i <= cost.size(); ++i) {
            arr[i]= min(arr[i-1]+cost[i-1],arr[i-2]+cost[i-2]);
        }
        return arr[cost.size()];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
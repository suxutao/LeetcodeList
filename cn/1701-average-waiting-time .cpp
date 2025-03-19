#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size(),time=customers[0][0];
        double ans=0;
        for (int i = 0; i < n; ++i) {
            time= max(time,customers[i][0])+customers[i][1];
            ans+=time-customers[i][0];
        }
        return ans/n;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
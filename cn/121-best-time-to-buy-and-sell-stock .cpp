#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size()==1)
            return 0;
        int MAX=0;
        int xiao=0,da=1;
        while (da<prices.size()){
            if (prices[da]>prices[xiao]){
                MAX= max(MAX,prices[da]-prices[xiao]);
                da++;
            }else{
                xiao=da;
                da++;
            }
        }
        return MAX;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
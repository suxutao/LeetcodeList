#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
        if (4*boardingCost<=runningCost)
            return -1;
        int lirun=0,zhuan=0,ans=-1,dengdai=0,ans_li=0;
        for (int i = 0; i < customers.size(); ++i) {
            dengdai+=customers[i];
            if (dengdai>4){
                dengdai-=4;
                lirun+=4*boardingCost-runningCost;
            }else{
                lirun+=dengdai*boardingCost-runningCost;
                dengdai=0;
            }
            zhuan++;
            if (lirun>ans_li){
                ans=zhuan;
                ans_li=lirun;
            }
        }
        while(dengdai>=4){
            dengdai-=4;
            lirun+=4*boardingCost-runningCost;
            zhuan++;
            if (lirun>ans_li){
                ans=zhuan;
                ans_li=lirun;
            }
        }
        if (dengdai>0){
            if (dengdai*boardingCost>runningCost)
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
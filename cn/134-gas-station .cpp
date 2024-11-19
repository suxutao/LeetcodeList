#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int>sheng(gas.size()*2);
        for (int i = 0; i < gas.size(); ++i) {
            sheng[i]=gas[i]-cost[i];
        }
        for (int i = gas.size(); i < sheng.size(); ++i) {
            sheng[i]=sheng[i-gas.size()];
        }
        int ans=0,sum=0,MAX=INT_MIN,temp,temp2=INT_MIN;
        for (int i = 0; i < sheng.size(); ++i) {
            sum+=sheng[i];
            if (sum>0){
                temp=i;
                while(i<sheng.size()-1&&sum>=0){
                    i++;sum+=sheng[i];
                    temp2= max(temp2,sum);
                }
                if (temp2>MAX){
                    MAX=temp2;
                    ans=temp;
                }
                sum=0;
            }else{
                sum=0;
            }
        }
        sum=0;
        for (int i = ans; i < gas.size(); ++i) {
            sum+=sheng[i];
            if (sum<0)
                return -1;
        }
        for (int i = 0; i < ans; ++i) {
            sum+=sheng[i];
            if (sum<0)
                return -1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
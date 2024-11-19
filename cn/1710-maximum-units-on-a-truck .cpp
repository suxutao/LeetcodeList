#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans=0;
        std::sort(boxTypes.begin(), boxTypes.end(),[](vector<int>&a,vector<int>&b){
            return a[1]>b[1];
        });
        for (int i = 0; i < boxTypes.size(); ++i) {
            if (boxTypes[i][0]<truckSize){
                truckSize-=boxTypes[i][0];
                ans+=boxTypes[i][1]*boxTypes[i][0];
            }else{
                ans+=truckSize*boxTypes[i][1];
                break;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
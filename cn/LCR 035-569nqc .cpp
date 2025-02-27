#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int cha(string&a,string&b){
        int ans=((b[0]-'0')*10-(a[0]-'0')*10+b[1]-a[1])*60+(b[3]-'0')*10-(a[3]-'0')*10+b[4]-a[4];
        return min(ans,1440-ans);
    }
    int findMinDifference(vector<string>& timePoints) {
        std::sort(timePoints.begin(), timePoints.end());
        int ans= cha(timePoints[0],timePoints.back());
        for (int i = 0; i < timePoints.size() - 1; ++i) {
            ans= min(ans, cha(timePoints[i],timePoints[i+1]));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
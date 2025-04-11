#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size(),ans=0;
        vector<int>v{neededTime[0]};
        colors.push_back(' ');
        neededTime.push_back(0);
        for (int i = 1; i <= n; ++i) {
            if (colors[i]!=colors[i-1]){
                sort(v.begin(), v.end());
                for (int j = 0; j < v.size() - 1; ++j) {
                    ans+=v[j];
                }
                v.clear();
            }
            v.push_back(neededTime[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
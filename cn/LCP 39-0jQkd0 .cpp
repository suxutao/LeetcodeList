#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumSwitchingTimes(vector<vector<int>>& source, vector<vector<int>>& target) {
        int m=source.size(),n=source[0].size(),ans=0;
        unordered_map<int,int>ma;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                ma[source[i][j]]++;
                ma[target[i][j]]--;
            }
        }
        for (auto &[_,a]: ma){
            ans+=abs(a);
        }
        return ans/2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
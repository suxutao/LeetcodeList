#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> generateSchedule(int n) {
        if (n<=4)
            return {};
        vector<vector<int>>ans;
        for (int d = 2; d < n-1; ++d) {
            for (int i = 0; i < n; ++i) {
                ans.push_back({i,(i+d)%n});
            }
        }
        for (int i = 0; i < n; ++i) {
            ans.push_back({i,(i+1)%n});
            ans.push_back({(i+n-1)%n,(i+n-2)%n});
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
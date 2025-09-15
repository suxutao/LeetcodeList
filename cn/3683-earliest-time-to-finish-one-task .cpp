#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans=INT_MAX;
        for (auto &task: tasks){
            ans= min(ans,task[0]+task[1]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        int ans=0;
        std::sort(processorTime.begin(), processorTime.end());
        std::sort(tasks.begin(), tasks.end(),greater<>());
        for (int i = 0; i < tasks.size(); ++i) {
            ans= max(processorTime[i/4]+tasks[i],ans);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
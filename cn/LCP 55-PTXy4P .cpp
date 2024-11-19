#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int getMinimumTime(vector<int>& time, vector<vector<int>>& fruits, int limit) {
        int ans=0;
        for (int i = 0; i < fruits.size(); ++i) {
            ans+=time[fruits[i][0]]* ceil((double)fruits[i][1]/limit);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
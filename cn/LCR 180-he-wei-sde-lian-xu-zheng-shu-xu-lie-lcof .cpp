#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> fileCombination(int target) {
        vector<vector<int>>v;
        for (int i = 1; i < target; ++i) {
            vector<int>t;
            int sum=0;
            for (int j = i; sum < target; ++j) {
                sum+=j;
                t.push_back(j);
            }
            if (sum==target)
                v.push_back(t);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
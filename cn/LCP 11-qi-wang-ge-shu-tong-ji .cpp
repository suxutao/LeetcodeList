#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int expectNumber(vector<int>& scores) {
        std::sort(scores.begin(), scores.end());
        int score= scores[0],ans=1;
        for (int i = 1; i < scores.size(); ++i) {
            if (scores[i]!=score){
                ++ans;
                score=scores[i];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
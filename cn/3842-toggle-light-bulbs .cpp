#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>ans,p(101);
        for (auto &i: bulbs){
            p[i]=1-p[i];
        }
        for (int i = 1; i <= 100; ++i) {
            if (p[i])
                ans.push_back(i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
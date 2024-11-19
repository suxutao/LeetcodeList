#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        gain.insert(gain.begin(),0);
        for (int i = 1; i < gain.size(); ++i) {
            gain[i]+=gain[i-1];
        }
        return *std::max_element(gain.begin(), gain.end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
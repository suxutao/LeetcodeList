#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        unordered_map<char,int>m;
        for (int i = 0; i < jewels.size(); ++i) {
            m[jewels[i]]++;
        }
        for (int i = 0; i < stones.size(); ++i) {
            if (m[stones[i]])
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
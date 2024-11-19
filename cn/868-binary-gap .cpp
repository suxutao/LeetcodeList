#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int binaryGap(int n) {
        vector<int>v;
        for (int i = 0; i < 32; ++i) {
            if (n>>i&1)
                v.push_back(i);
        }
        int ans=0;
        for (int i = 1; i < v.size(); ++i) {
            ans= max(ans,v[i]-v[i-1]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
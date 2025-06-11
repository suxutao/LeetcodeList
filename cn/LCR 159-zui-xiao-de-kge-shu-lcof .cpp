#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> inventoryManagement(vector<int>& v, int cnt) {
        vector<int>ans(cnt);
        sort(v.begin(), v.end());
        for (int i = 0; i < cnt; ++i) {
            ans[i]=v[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
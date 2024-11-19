#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int m=strs.size(),n=strs[0].size(),ans=0;
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                if (strs[j][i]<strs[j-1][i]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
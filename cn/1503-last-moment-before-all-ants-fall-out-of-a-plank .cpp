#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans=0;
        for (int i = 0; i < left.size(); ++i) {
            ans=max(ans,left[i]);
        }
        for (int i = 0; i < right.size(); ++i) {
            ans=max(n-right[i],ans);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
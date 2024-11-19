#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans=0,n=colors.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (colors[i]!=colors[j])
                    ans= max(ans,j-i);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
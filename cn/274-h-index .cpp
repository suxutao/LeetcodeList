#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size(),ans=n;
        std::sort(citations.begin(), citations.end());
        for (int i = 0; i < n; ++i) {
            if (citations[i]>=ans)
                break;
            ans--;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
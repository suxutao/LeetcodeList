#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int sum=0,ans=0;
        unordered_set<int>s(banned.begin(),banned.end());
        for (int i = 1; sum <= maxSum&&i<=n; ++i) {
            if (!s.contains(i)){
                sum+=i;
                ans++;
            }
        }
        if (sum>maxSum) ans--;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
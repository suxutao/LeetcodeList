#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumSum(int n, int k) {
        unordered_map<int,int>m;
        int ans=0,cnt=0;
        for (int i = 1; cnt < n; ++i) {
            if (!m[k-i])
                ans+=i,cnt++,m[i]++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
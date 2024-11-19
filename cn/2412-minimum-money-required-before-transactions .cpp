#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minimumMoney(vector<vector<int>>& transactions) {
        ll ans=0;int mx=0;
        for (auto &i: transactions){
            ans+= max(0,i[0]-i[1]);
            mx= max(mx, min(i[0],i[1]));
        }
        return ans+mx;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v={{2,1},{5,0},{4,2}};
    Solution().minimumMoney(v);
    return 0;
}
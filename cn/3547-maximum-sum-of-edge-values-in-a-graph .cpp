#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxScore(int n, vector<vector<int>>& edges) {
        if (n==1)
            return 0;
        ll ans=0;
        deque<ll>d;
        for (int i = 0; i < n; ++i) {
            if (i&1)
                d.push_front(n-i);
            else
                d.push_back(n-i);
        }
        for (int i = 0; i < n - 1; ++i) {
            ans+=d[i]*d[i+1];
        }
        if (n==edges.size())
            ans+=2;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
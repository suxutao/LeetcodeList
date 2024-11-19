#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>v;
    bool not_prime[1000002]={};
    vector<vector<int>> findPrimePairs(int n) {
        for (int i = 2; i < n; ++i) {
            if (not_prime[i])
                continue;
            for (int j = 2; j*i <= n; ++j) {
                not_prime[j*i]=1;
            }
        }
        for (int i = 2; i <= n / 2; ++i) {
            if (!not_prime[i]&&!not_prime[n-i])
                v.push_back({i,n-i});
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
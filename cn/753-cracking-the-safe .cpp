#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
private:
    unordered_set<int> seen;
    string ans;
    int highest;
    int k;
public:
    void dfs(int node) {
        for (int x = 0; x < k; ++x) {
            int nei = node * 10 + x;
            if (!seen.count(nei)) {
                seen.insert(nei);
                dfs(nei % highest);
                ans += (x + '0');
            }
        }
    }
    string crackSafe(int n, int k) {
        highest = pow(10, n - 1);
        this->k = k;
        dfs(0);
        ans += string(n - 1, '0');
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
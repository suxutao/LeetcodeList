#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int N;
    vector<int>v;
    Solution(int n, vector<int>& blacklist) {
        N=n-blacklist.size();
        v=blacklist;
        sort(v.begin(), v.end());
    }
    
    int pick() {

    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(n, blacklist);
 * int param_1 = obj->pick();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
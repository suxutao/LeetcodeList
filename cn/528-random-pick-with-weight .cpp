#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    int sum=0;
    Solution(vector<int>& w) {
        v=w;
        for (int i = 1; i < v.size(); ++i) {
            v[i]+=v[i-1];
        }
        sum=accumulate(w.begin(), w.end(),0);
    }
    
    int pickIndex() {
        return lower_bound(v.begin(), v.end(),rand()%sum+1)-v.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
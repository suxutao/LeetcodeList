#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_set<int>s(arr.begin(),arr.end());
        int cnt=0,i;
        for (i = 1; cnt < k; ++i) {
            if (!s.contains(i))
                ++cnt;
        }
        return i-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
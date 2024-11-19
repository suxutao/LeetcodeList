#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        unordered_set<int>s{2,3,5,7,11,13,17,19,23,29,31};
        int ans=0;
        for (int i = left; i <= right; ++i) {
            int t=i,cnt=0;
            while (t){
                cnt++;
                t&=(t-1);
            }
            if (s.contains(cnt))
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
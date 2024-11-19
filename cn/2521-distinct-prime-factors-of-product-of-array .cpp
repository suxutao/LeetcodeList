#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int>s;
        for (auto &i: nums){
            for (int j = 2; j*j <= i; ++j) {
                if (i%j==0) {
                    s.insert(j);
                    while (i%j==0)
                        i/=j;
                }
            }
            if (i>1)
                s.insert(i);
        }
        return s.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
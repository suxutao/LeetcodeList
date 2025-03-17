#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        unordered_set<int>s;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (j==i)
                    continue;
                for (int k = 0; k < n; ++k) {
                    if (k==i||k==j)
                        continue;
                    if (digits[i]&&digits[k]%2==0)
                        s.insert(digits[i]*100+digits[j]*10+digits[k]);
                }
            }
        }
        return s.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
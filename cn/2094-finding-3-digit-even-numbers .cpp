#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n=digits.size();
        set<int>s;
        for (int i = 0; i < n; ++i) {
            if (digits[i]==0)
                continue;
            for (int j = 0; j < n; ++j) {
                if (i==j)
                    continue;
                for (int k = 0; k < n; ++k) {
                    if (i==k||j==k||digits[k]&1)
                        continue;
                    s.insert(digits[i]*100+digits[j]*10+digits[k]);
                }
            }
        }
        return vector<int>(s.begin(),s.end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
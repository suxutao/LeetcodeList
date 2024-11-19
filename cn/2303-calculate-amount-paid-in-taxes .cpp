#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double ans=0;
        for (int i = brackets.size()-1; i; --i) {
            brackets[i][0]-=brackets[i-1][0];
        }
        for (int i = 0; i < brackets.size()&&income; ++i) {
            if (income>=brackets[i][0]) {
                ans += brackets[i][0] / 100. * brackets[i][1];
                income-=brackets[i][0];
            }else {
                ans += income / 100. * brackets[i][1];
                income=0;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> sumZero(int n) {
        int sum=0;
        vector<int>v;
        for (int i = 1; i <= n - 1; ++i) {
            v.push_back(i);
            sum+=i;
        }
        v.push_back(-sum);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
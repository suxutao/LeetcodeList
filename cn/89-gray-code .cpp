#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>v(1<<n);
        for (int i = 0; i < v.size(); ++i) {
            v[i]=i^(i/2);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
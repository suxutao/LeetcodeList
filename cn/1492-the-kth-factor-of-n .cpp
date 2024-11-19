#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>v;
        for (int i = 1; i <= n; ++i) {
            if (n%i==0)
                v.push_back(i);
        }
        return v.size()>=k?v[k-1]:-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
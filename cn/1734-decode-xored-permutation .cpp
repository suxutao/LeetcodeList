#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int n=encoded.size()+1,sum=0,qu=0;
        vector<int>v(n);
        for (int i = 1; i <= n; ++i) {
            sum^=i;
        }
        for (int i = 1; i < n-1; i+=2) {
            qu^=encoded[i];
        }
        v[0]=sum^qu;
        for (int i = 0; i < n-1; ++i) {
            v[i+1]=v[i]^encoded[i];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
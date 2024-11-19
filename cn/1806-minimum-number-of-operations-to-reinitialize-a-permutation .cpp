#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int reinitializePermutation(int n) {
        vector<int>v(n);
        int ans=0;
        for (int i = 0; i < n; ++i) {
            v[i]=i;
        }
        vector<int>v2(v.begin(),v.end()),v3(n);
        do {
            for (int i = 0; i < n; ++i) {
                if (i&1)
                    v3[i]=v2[n/2+(i-1)/2];
                else
                    v3[i]=v2[i/2];
            }
            std::copy(v3.begin(), v3.end(),v2.begin());
            ans++;
        } while (v!=v2);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
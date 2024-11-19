#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        vector<int>v(1<<n),ans(1<<n);
        for (int i = 0; i < v.size(); ++i) {
            v[i]=i^(i/2);
        }
        int pos= std::find(v.begin(), v.end(),start)-v.begin();
        for (int i = pos; i < v.size(); ++i) {
            ans[i-pos]=v[i];
        }
        for (int i = 0; i < pos; ++i) {
            ans[v.size()-pos+i]=v[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
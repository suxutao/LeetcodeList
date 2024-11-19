#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v{0,1,2};
    int findMinFibonacciNumbers(int k) {
        for (int i = 1; v[i]+v[i+1] <= k; ++i) {
            v.push_back(v[i]+v[i+1]);
        }
        int ans=0;
        while (k){
            k-=*lower_bound(v.rbegin(),v.rend(),k,greater<>());
            ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
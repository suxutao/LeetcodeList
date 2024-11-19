#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n=arr.size(),ans=0;
        vector<int>v(++n);
        for (int i = 1; i < n; ++i) {
            v[i]=v[i-1]^arr[i-1];
        }
        for (int i = 1; i < n - 1; ++i) {
            for (int k = i+1; k < n; ++k) {
                if (v[i-1]==v[k])
                    ans+=k-i;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
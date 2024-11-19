#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int smallestDifference(vector<int>& a, vector<int>& b) {
        sort(b.begin(), b.end());
        long long ans= abs(a[0]-b[0]);
        for (int i = 0; i < a.size(); ++i) {
            auto t1=lower_bound(b.begin(), b.end(),a[i]);
            if (t1!=b.end())
                ans= min(ans, abs(0ll+*t1-a[i]));
            auto t2=lower_bound(b.rbegin(), b.rend(),a[i],greater<>());
            if (t2!=b.rend())
                ans= min(ans, abs(0ll+*t2-a[i]));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=arr.size(),shan=n/20;
        double ans=0;
        std::sort(arr.begin(), arr.end());
        for (int i = shan; i < n - shan; ++i) {
            ans+=arr[i];
        }
        return ans/(n-shan*2);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
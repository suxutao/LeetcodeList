#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size(),sum=0,ans;
        for (int i = 0; i < n; ++i) {
            if (!grumpy[i]){
                sum+=customers[i];
            }
        }
        for (int i = 0; i < minutes; ++i) {
            if (grumpy[i])
                sum+=customers[i];
        }
        ans=sum;
        for (int i = minutes; i < n; ++i) {
            if (grumpy[i-minutes])
                sum-=customers[i-minutes];
            if (grumpy[i])
                sum+=customers[i];
            ans= max(ans,sum);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
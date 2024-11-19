#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int n=machines.size(),acc=accumulate(machines.begin(), machines.end(),0),pin,ans=0;
        if (acc%n)
            return -1;
        pin=acc/n;
        int l=0,r=acc;
        for (int i = 0; i < n; ++i) {
            r-=machines[i];
            ans=max(ans, max(0,pin*(n-i-1)-r)+max(0,pin*i-l));
            l+=machines[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
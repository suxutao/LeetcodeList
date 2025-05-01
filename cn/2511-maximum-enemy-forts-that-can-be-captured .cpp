#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n=forts.size(), p0=-1,p1=-1,ans=1;
        for (int i = 0; i < n; ++i) {
            if (forts[i]==1){
                p1=i;
                if (~p0)
                    ans= max(ans,i-p0);
                p0=-1;
            }else if (forts[i]==-1){
                p0=i;
                if (~p1)
                    ans= max(ans,i-p1);
                p1=-1;
            }
        }
        return ans-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
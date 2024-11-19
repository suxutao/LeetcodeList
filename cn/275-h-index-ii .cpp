#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int l=0,r=citations.size(),ans=0,middle,n=citations.size();
        if (n==1){
            if (citations[0]>=1)
                return 1;
            else
                return 0;
        }
        while (l<r){
            middle=(l+r)>>1;
            if (citations[middle]>=n-middle){
                ans= max(ans,n-middle);
                r=middle;
            }else{
                l=middle+1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
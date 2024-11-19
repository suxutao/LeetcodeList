#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
// The API isBadVersion is defined for you.
//bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long l=1,r=n;
        while (l<r){
            long long mid=(l+r)>>1;
            if (isBadVersion(mid))
                r=mid;
            else
                l=mid+1;
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
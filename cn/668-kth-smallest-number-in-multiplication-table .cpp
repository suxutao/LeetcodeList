#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int l=1,r=m*n,mid;
        auto check=[&](int u){
            int x=m-1,y=0,sum=0;
            while (x>=0&&y<n){
                if ((x+1)*(y+1)<=u){
                    sum+=x+1;
                    ++y;
                }else{
                    --x;
                }
            }
            return sum<k;
        };
        while (l<r){
            mid=(l+r)>>1;
            if (check(mid))
                l=mid+1;
            else
                r=mid;
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */
//class MountainArray {
//public:
//    int get(int index);
//    int length();
//};
class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int l=0,r=mountainArr.length()-1;
        while (l < r) {
            int mid=(l+r)>>1;
            if (mountainArr.get(mid)<mountainArr.get(mid+1)) {
                l=mid+1;
            } else {
                r=mid;
            }
        }
        int R=l,L=0;
        while (L<R){
            int mid=(L+R)>>1,t=mountainArr.get(mid);
            if (t==target)
                return mid;
            else if (t<target)
                L=mid+1;
            else
                R=mid;
        }
        L=l,R=mountainArr.length();
        while (L<R){
            int mid=(L+R)>>1,t=mountainArr.get(mid);
            if (t==target)
                return mid;
            else if (t>target)
                L=mid+1;
            else
                R=mid;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countTarget(vector<int>& scores, int target) {
        int n=scores.size(),l=0,r=n,a=0;
        while (l<r){
            int mid=(l+r)>>1;
            if (scores[mid]<target){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        r=n;
        while (a<r){
            int mid=(a+r)>>1;
            if (scores[mid]<=target){
                a=mid+1;
            }else{
                r=mid;
            }
        }
        return a-l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
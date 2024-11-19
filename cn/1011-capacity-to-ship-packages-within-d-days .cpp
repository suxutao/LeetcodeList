#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(), weights.end());
        int r=accumulate(weights.begin(), weights.end(),0);
        auto check=[&](int x){
            int temp=1,sum=0;
            for (auto &i: weights){
                if (sum+i>x){
                    temp++;
                    sum=i;
                }else{
                    sum+=i;
                }
            }
            return temp>days;
        };
        while (l<r){
            int mid=(l+r)>>1;
            if (check(mid)){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(piles.begin(),piles.end());
        auto check=[&](double x){
            int temp=0;
            for (auto &i: piles){
                temp+= ceil(i/x);
            }
            return temp>h;
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
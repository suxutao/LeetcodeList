#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        long long l=0,r=INT_MAX;
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        auto check=[&](long long R){
            if (heaters[0]-R>houses[0])
                return false;
            int pos=0;
            for (auto &i: heaters){
                auto t=lower_bound(houses.begin(), houses.end(),i-R)-houses.begin();
                if (t>pos)
                    return false;
                pos=upper_bound(houses.begin(), houses.end(),i+R)-houses.begin();
            }
            return pos==houses.size();
        };
        while (l<r){
            long long mid=(l+r)>>1;
            if (!check(mid)){
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
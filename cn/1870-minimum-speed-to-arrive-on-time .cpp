#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        if (hour<=dist.size()-1)
            return -1;
        int l=1,r=*max_element(dist.begin(), dist.end())*100;
        auto check=[&](double v){
            double temp=0;
            for (int i = 0; i < dist.size() - 1; ++i) {
                temp+=ceil(dist[i]/v);
            }
            temp+=dist.back()/v;
            return temp>hour;
        };
        while (l<r){
            double mid=(l+r)/2;
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
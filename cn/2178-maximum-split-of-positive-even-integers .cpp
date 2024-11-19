#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    vector<long long> maximumEvenSplit(long long finalSum) {
        if (finalSum&1)
            return {};
        ll sum=0,i;vector<ll>v;
        for (i = 2; sum <= finalSum; i+=2){
            sum+=i;
            v.push_back(i);
        }
        sum-=i;
        v.pop_back();
        v.back()+=finalSum-sum-2;
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
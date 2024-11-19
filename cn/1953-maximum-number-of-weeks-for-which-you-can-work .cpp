#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long numberOfWeeks(vector<int>& milestones) {
        ll sum=0,MAX=0;
        for (auto &item: milestones){
            sum+=(ll)item;
            MAX= max<ll>(MAX,item);
        }
        if (sum+1<MAX*2)
            return (sum-MAX)*2+1;
        else
            return sum;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
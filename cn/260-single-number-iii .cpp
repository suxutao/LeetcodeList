#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    typedef long long ll;
    vector<int> singleNumber(vector<int>& nums) {
        ll x=0;
        int a=0;
        for (const auto &item: nums){
            x^=item;
        }
        int lowbit=x&(-x);
        for (const auto &item: nums){
            if (item&lowbit)
                a^=item;
        }
        return {a,(int)x^a};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
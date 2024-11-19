#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long countCompleteDayPairs(vector<int>& hours) {
        ll ans=0;
        unordered_map<int,int>m;
        for (auto &i: hours){
            i%=24;
            ans+=i?m[24-i]:m[0];
            m[i]++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
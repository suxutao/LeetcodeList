#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    const int N=1e9+7;
    int f(int u){
        string s=to_string(u);
        reverse(s.begin(), s.end());
        return u-stoi(s);
    }
    int countNicePairs(vector<int>& nums) {
        ll ans=0;
        unordered_map<int,int>m;
        for (auto &i: nums){
            int j= f(i);
            ans+=m[j];
            ++m[j];
        }
        return ans%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
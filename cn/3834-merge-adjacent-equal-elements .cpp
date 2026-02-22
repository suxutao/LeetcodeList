#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    vector<long long> mergeAdjacent(vector<int>& nums) {
        int n=nums.size();
        vector<ll>ans;
        for (int i = 0; i < n; ++i) {
            ll t=nums[i];
            while (!ans.empty()&&ans.back()==t){
                t<<=1;
                ans.pop_back();
            }
            ans.push_back(t);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
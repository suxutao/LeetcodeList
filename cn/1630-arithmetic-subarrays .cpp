#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=l.size();
        vector<bool>ans(n,1);
        for (int i = 0; i < n; ++i) {
            vector<int>v(nums.begin()+l[i],nums.begin()+r[i]+1);
            std::sort(v.begin(), v.end());
            for (int j = 2; j < v.size(); ++j) {
                if (v[j]-v[j-1]!=v[1]-v[0]){
                    ans[i]=0;
                    break;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        unordered_map<int,int>m;
        set<int>s(nums.begin(),nums.end());
        for (auto &item: nums)
            ++m[item];
        for (auto i = s.begin(); i!=s.end(); ++i) {
            if (m[*i]){
                for (int j = 1; j < k; ++j) {
                    if (m[*i+j]<m[*i])
                        return false;
                    m[*i+j]-=m[*i];
                }
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
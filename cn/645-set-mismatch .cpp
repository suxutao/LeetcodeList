#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>m;
        int a=-1,b=-1;
        for (int i = 0; i < nums.size(); ++i) {
            m[nums[i]]++;
        }
        for (int i = 1; i <= nums.size(); ++i) {
            if (!m[i])
                b=i;
            if (m[i]==2)
                a=i;
            if (~a&&~b)
                return {a,b};
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
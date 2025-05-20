#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>cha(n+1);
        for (auto &i: queries){
            cha[i[0]]++;
            cha[i[1]+1]--;
        }
        if (cha[0]<nums[0])
            return false;
        for (int i = 1; i < n; ++i) {
            cha[i]+=cha[i-1];
            if (cha[i]<nums[i])
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
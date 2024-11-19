#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n=nums.size();
        int pos1= std::find(nums.begin(), nums.end(),1)-nums.begin();
        int pos2= std::find(nums.begin(), nums.end(),n)-nums.begin();
        if (pos1<pos2)
            return pos1+n-pos2-1;
        else
            return pos1+n-pos2-2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
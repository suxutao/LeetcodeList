#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>v(nums);
        sort(v.begin(), v.end());
        int l=(v.size()-1)/2,r=v.size()-1;
        for (int i = 0; i < v.size(); ++i) {
            if (!(i&1))
                nums[i]=v[l--];
            else
                nums[i]=v[r--];
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int pan(int x){
        int res=0;
        while (x){
            x&=(x-1);
            ++res;
        }
        return res;
    }
    bool canSortArray(vector<int>& nums) {
        int n=nums.size(),l=0,bi= pan(nums[0]);
        for (int i = 1; i < n; ++i) {
            int pa= pan(nums[i]);
            if (pa!=bi){
                bi=pa;
                sort(nums.begin()+l,nums.begin()+i);
                l=i;
            }
        }
        sort(nums.begin()+l,nums.end());
        for (int i = 0; i < n-1; ++i) {
            if (nums[i]>nums[i+1])
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
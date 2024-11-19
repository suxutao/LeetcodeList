#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=0,b=0;
        while(b<nums.size()-1){
            if (nums[b]!=nums[b+1]){
                nums[a++]=nums[b];
            }
            b++;
        }
        nums[a++]=nums[b];
        return a;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
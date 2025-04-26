#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size(),cnt=0,pos=find(nums.begin(), nums.end(),1)-nums.begin();
        for (int i = pos+1; i < n; ++i) {
            if (nums[i]){
                if (cnt<k)
                    return false;
                cnt=0;
            }else{
                cnt++;
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
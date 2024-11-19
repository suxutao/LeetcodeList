#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int left=0,right=height.size()-1;
        while (left<right){
            if (height[left]<height[right]){
                ans= max(ans,height[left]*(right-left));
                left++;
            }else{
                ans= max(ans,height[right]*(right-left));
                right--;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
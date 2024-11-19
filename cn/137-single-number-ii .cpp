#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size()==1)
            return nums[0];
        int arr[33]={0};
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < 32; ++j) {
                if (nums[i]&1){
                    arr[j]++;
                }nums[i]>>=1;
            }
        }
        int ans=0,ch=1;
        for (int i = 0; i < 32; ++i) {
            if (arr[i]%3!=0){
                ans+=ch;
            }
            ch<<=1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
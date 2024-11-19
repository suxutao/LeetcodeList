#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        if (nums.size()==1)
            return false;
        int sum=0;
        for (int i = 0; i < nums.size(); ++i) {
            sum+=nums[i];
        }
        if (sum&1)
            return false;
        else{
            int cap=sum/2;
            int arr[nums.size()+1][cap+1];
            for (int i = 0; i <= cap; ++i) {
                arr[0][i]=0;
            }
            for (int i = 0; i <= nums.size(); ++i) {
                arr[i][0]=0;
            }
            for (int i = 1; i <= nums.size(); ++i) {
                for (int j = 1; j <= cap; ++j) {
                    if (nums[i-1]>j)
                        arr[i][j]=arr[i-1][j];
                    else
                        arr[i][j]= max(arr[i-1][j],nums[i-1]+arr[i-1][j-nums[i-1]]);
                }
            }
            if (arr[nums.size()][cap]==cap)
                return true;
            else
                return false;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
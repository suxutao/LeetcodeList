#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int arr[105]{},n=nums.size();
        vector<int>v(n-k+1);
        for (int i = 0; i < k - 1; ++i) {
            ++arr[nums[i]+50];
        }
        for (int i = k-1; i < n; ++i) {
            ++arr[nums[i]+50];
            int t=x;
            for (int j = 0; j < 50; ++j) {
                t-=arr[j];
                if (t<=0){
                    v[i-k+1]=j-50;
                    break;
                }
            }
            --arr[nums[i-k+1]+50];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
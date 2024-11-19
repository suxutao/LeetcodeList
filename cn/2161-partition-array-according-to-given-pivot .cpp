#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        int left=0,right=n-1;
        vector<int>v(n);
        for (int i = 0; i < n; ++i) {
            if (nums[i]<pivot)
                v[left++]=nums[i];
        }
        for (int i = n-1; i >= 0; --i) {
            if (nums[i]>pivot)
                v[right--]=nums[i];
        }
        for (int i = left; i <= right; ++i) {
            v[i]=pivot;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
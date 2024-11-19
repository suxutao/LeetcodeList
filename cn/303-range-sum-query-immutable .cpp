#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class NumArray {
public:
    vector<int>v;
    NumArray(vector<int>& nums) {
        v.resize(nums.size()+1);
        for (int i = 1; i < v.size(); ++i) {
            v[i]=v[i-1]+nums[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        return v[right+1]-v[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
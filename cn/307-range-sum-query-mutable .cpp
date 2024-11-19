#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class NumArray {
public:
    int tree[30005]={},n,num[30005]={};
    int lowbit(int x){
        return x&-x;
    }
    NumArray(vector<int>& nums) {
        n=nums.size();
        for (int i = 0; i < n; ++i) {
            update(i,nums[i]);
            num[i]=nums[i];
        }
    }
    
    void update(int index, int val) {
        int temp=val-num[index];
        num[index++]=val;
        while (index<=n){
            tree[index]+=temp;
            index+=lowbit(index);
        }
    }
    int sum(int x){
        int ans=0;
        while (x>0){
            ans+= tree[x];
            x-= lowbit(x);
        }
        return ans;
    }
    int sumRange(int left, int right) {
        return sum(right+1)- sum(left);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
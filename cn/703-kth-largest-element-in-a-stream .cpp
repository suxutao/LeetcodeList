#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class KthLargest {
public:
    priority_queue<int,vector<int>,greater<>>q;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for (int i = 0; i < nums.size(); ++i) {
            q.push(nums[i]);
        }
        while (q.size()>k){
            q.pop();
        }
    }
    
    int add(int val) {
        if (q.size()<k){
            q.push(val);
        }else if (val>q.top()){
            q.push(val);
            q.pop();
        }
        return q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
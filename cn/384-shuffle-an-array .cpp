#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    Solution(vector<int>& nums) {
        v=nums;
    }
    
    vector<int> reset() {
        return v;
    }
    
    vector<int> shuffle() {
        vector<int>temp(v);
        for (int i = 0; i < v.size(); ++i) {
            int t=rand()%(v.size()-i)+i;
            swap(temp[i],temp[t]);
        }
        return temp;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
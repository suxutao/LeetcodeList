#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool check(vector<int>&v){
        for (int i = 1; i < v.size() - 1; ++i) {
            if (v[i]*2==v[i-1]+v[i+1])
                return false;
        }
        return true;
    }
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(), nums.end());
        while (!check(nums)){
            for (int i = 0; i < nums.size(); i+=2) {
                v.push_back(nums[i]);
            }
            for (int i = 1; i < nums.size(); i+=2) {
                v.push_back(nums[i]);
            }
            for (int i = 0; i < v.size()-2; i+=2) {
                swap(v[i],v[i+1]);
            }
            nums=v;v.clear();
        }
        return nums;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
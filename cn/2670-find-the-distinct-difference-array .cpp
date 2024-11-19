#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v1(n);
        vector<int>v2(n+1);
        vector<int>v3(n);
        unordered_set<int>s;
        for (int i = 0; i < n; ++i) {
            s.insert(nums[i]);
            v1[i]=s.size();
        }s.clear();
        for (int i = n-1; i >= 0; --i) {
            s.insert(nums[i]);
            v2[i]=s.size();
        }
        for (int i = 0; i < n; ++i) {
            v3[i]=v1[i]-v2[i+1];
        }
        return v3;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
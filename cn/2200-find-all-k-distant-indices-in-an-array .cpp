#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n=nums.size(),r=0;
        vector<int>v;
        for (int i = 0; i < n; ++i) {
            if (nums[i]==key){
                for (int j = max(r,i-k); j < min(n, i + k + 1); ++j) {
                    v.push_back(j);
                }
                r= i+k+1;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> fs;
        vector<int> mx(k + 2);
        for (int x : nums) {
            if (!fs.contains(x)) {
                fs[x] = vector<int>(k + 1);
            }
            auto& f = fs[x];
            for (int j = k; j >= 0; j--) {
                f[j] = max(f[j], mx[j]) + 1;
                mx[j + 1] = max(mx[j + 1], f[j]);
            }
        }
        return mx[k + 1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
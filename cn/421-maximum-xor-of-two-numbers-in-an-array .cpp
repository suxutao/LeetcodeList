#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int x = 0;
        for (int i = 30; i >= 0; --i) {
            unordered_set<int>s;
            for (int num: nums) {
                s.insert(num >> i);
            }
            int x_next = x * 2 + 1;
            bool found = false;
            for (int num: nums) {
                if (s.count(x_next ^ (num >> i))) {
                    found = true;
                    break;
                }
            }
            if (found) {
                x = x_next;
            }else {
                x = x_next - 1;
            }
        }
        return x;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
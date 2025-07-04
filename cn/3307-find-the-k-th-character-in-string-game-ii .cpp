#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        if (operations.empty()) {
            return 'a';
        }
        int op = operations.back();
        operations.pop_back();
        int n = operations.size(); // 注意这里是减一后的 n
        if (n >= 63 || k <= (1LL << n)) { // k 在左半段
            return kthCharacter(k, operations);
        }
        // k 在右半段
        char ans = kthCharacter(k - (1LL << n), operations);
        return 'a' + (ans - 'a' + op) % 26;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int i = a.size() - 1; // 从右往左遍历 a 和 b
        int j = b.size() - 1;
        int carry = 0; // 保存进位

        while (i >= 0 || j >= 0 || carry) {
            int x = i >= 0 ? a[i] - '0' : 0;
            int y = j >= 0 ? b[j] - '0' : 0;
            int sum = x + y + carry; // 计算这一位的加法
            // 例如 sum = 10，把 '0' 填入答案，把 carry 置为 1
            ans += sum % 2 + '0';
            carry = sum / 2;
            i--;
            j--;
        }

        ranges::reverse(ans);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
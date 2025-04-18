#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
const int MAX_N = 333; // 进制转换后的最大长度
const int MAX_B = 10;
long long comb[MAX_N + MAX_B][MAX_B];

int init = [] {
    // 预处理组合数
    for (int i = 0; i < MAX_N + MAX_B; i++) {
        comb[i][0] = 1;
        for (int j = 1; j < min(i + 1, MAX_B); j++) {
            // 注意本题组合数较小，无需取模
            comb[i][j] = comb[i - 1][j - 1] + comb[i - 1][j];
        }
    }
    return 0;
}();

class Solution {
    // 把十进制字符串 s 转成 b 进制
    // 用小学学过的【竖式除法】计算，读者可以先用竖式除法算算 1234÷10，再对照下面的代码
    vector<int> trans(string& s, int b) {
        for (char& c : s) {
            c -= '0';
        }
        vector<int> digits;
        while (!s.empty()) {
            string nxt_s; // 用竖式除法计算 s / b 得到的商（十进制）
            int rem = 0; // s % b
            for (char c : s) {
                rem = rem * 10 + c;
                int q = rem / b; // 商
                if (q || !nxt_s.empty()) { // 忽略前导零
                    nxt_s.push_back(q);
                }
                rem = rem % b;
            }
            digits.push_back(rem);
            s = move(nxt_s);
        }
        ranges::reverse(digits);
        return digits;
    }

    long long calc(string& s, int b, bool check_s) {
        vector<int> digits = trans(s, b);
        // 计算小于 s 的合法数字个数
        // 为什么是小于？注意下面的代码，我们没有统计每个数位都填 digits[i] 的情况
        long long res = 0;
        int pre = 0;
        for (int i = 0; i < digits.size() && digits[i] >= pre; i++) {
            int hi = digits[i];
            int m = digits.size() - 1 - i;
            res += comb[m + b - pre][b - 1 - pre] - comb[m + b - hi][b - 1 - hi]; // 不受约束的方案数
            pre = hi; // 这一位填 hi，继续计算剩余数位的方案数
        }
        return res + (check_s && is_non_dec(digits)); // 单独判断 digits 是否合法
    }

    bool is_non_dec(vector<int>& digits) {
        for (int i = 1; i < digits.size(); i++) {
            if (digits[i - 1] > digits[i]) {
                return false;
            }
        }
        return true;
    }

public:
    int countNumbers(string l, string r, int b) {
        // 小于 r+1 的合法数字个数 - 小于 l 的合法数字个数
        return (calc(r, b, true) - calc(l, b, false)) % 1'000'000'007;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
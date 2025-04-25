#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int n = s.size(), ans = 0;
        for (int i = 0, j = n - 1; i < j; i++) {
            for (int k = j; i != k; k--)
                if (s[i] == s[k]) {
                    for (; k < j; k++)
                        swap(s[k], s[k + 1]), ans++;
                    j--;
                    goto OK;
                }
            ans += n / 2 - i;
            OK: continue;
        }
        return ans;
    }
};;
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    string s="aabb";
    Solution().minMovesToMakePalindrome(s);
    return 0;
}
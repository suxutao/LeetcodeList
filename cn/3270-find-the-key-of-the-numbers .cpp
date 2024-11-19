#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string ans;
        for (int i = 0; i < 4; ++i) {
            ans.push_back(min({num1 % 10, num2 % 10, num3 % 10})+'0');
            num1/=10;
            num2/=10;
            num3/=10;
        }
        std::reverse(ans.begin(), ans.end());
        return stoi(ans);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
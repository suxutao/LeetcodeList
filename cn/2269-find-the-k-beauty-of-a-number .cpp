#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int ans=0;
        for (int i = 0; i <= s.size() - k; ++i) {
            int t= stoi(s.substr(i,k));
            if (t&&num%t==0){
                ++ans;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
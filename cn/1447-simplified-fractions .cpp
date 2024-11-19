#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>v;
        for (int i = 2; i <= n; ++i) {
            for (int j = 1; j < i; ++j) {
                if (__gcd(i,j)==1){
                    v.push_back(to_string(j)+"/"+to_string(i));
                }
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string>v;
    vector<string> permutation(string S) {
        std::sort(S.begin(), S.end());
        do {
            v.emplace_back(S);
        } while (std::next_permutation(S.begin(), S.end()));
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
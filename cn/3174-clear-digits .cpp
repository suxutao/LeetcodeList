#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string clearDigits(string s) {
        string ans;
        for (int i = 0; i < s.size(); ++i) {
            if (isdigit(s[i])){
                if (!ans.empty())
                    ans.pop_back();
            }else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
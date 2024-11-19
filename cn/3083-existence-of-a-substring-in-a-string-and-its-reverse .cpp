#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isSubstringPresent(string s) {
        for (int i = 0; i < s.size()-1; ++i) {
            string temp=s.substr(i,2);
            std::reverse(temp.begin(), temp.end());
            if (s.find(temp)!=string::npos)
                return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
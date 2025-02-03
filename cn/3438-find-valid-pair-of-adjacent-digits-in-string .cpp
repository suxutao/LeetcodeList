#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string findValidPair(string s) {
        int arr[10+'0']{};
        for (auto &item: s)
            ++arr[item];
        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i]!=s[i+1]&&arr[s[i]]==s[i]-'0'&&arr[s[i+1]]==s[i+1]-'0')
                return s.substr(i,2);
        }
        return "";
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string reformat(string s) {
        string s1,s2,ans;
        for (int i = 0; i < s.size(); ++i) {
            if (isdigit(s[i]))
                s1.push_back(s[i]);
            else
                s2.push_back(s[i]);
        }
        if (abs<int>(s1.size()-s2.size())>1){
            return "";
        }
        if (s1.size()<s2.size())
            swap(s1,s2);
        for (int i = 0; i < s1.size(); ++i) {
            ans.push_back(s1[i]);
            if (i<s2.size())
                ans.push_back(s2[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
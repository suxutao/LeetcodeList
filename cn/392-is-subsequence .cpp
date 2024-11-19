#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.length()>t.length())
            return false;
        if (s.empty())
            return true;
        int ps=0,pt=0;
        while(pt<t.size()){
            if (s[ps]==t[pt]){
                ps++;pt++;
                if (ps==s.size())
                    return true;
            }else{
                pt++;
            }
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    string s="ahc",t="ahbgdc";
    if (Solution().isSubsequence(s,t))
        cout<<"hello world";
    else
        cout<<'f';
    return 0;
}
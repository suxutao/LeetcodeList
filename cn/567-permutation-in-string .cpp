#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size(),n2=s2.size();
        if (n1>n2)
            return false;
        unordered_map<char,int>m;
        for (int i = 0; i < n1; ++i) {
            ++m[s1[i]];
            if (m[s1[i]]==0)
                m.erase(s1[i]);
            --m[s2[i]];
            if (m[s2[i]]==0)
                m.erase(s2[i]);
        }
        if (m.empty())
            return true;
        for (int i = n1; i < n2; ++i) {
            ++m[s2[i-n1]];
            if (m[s2[i-n1]]==0)
                m.erase(s2[i-n1]);
            --m[s2[i]];
            if (m[s2[i]]==0)
                m.erase(s2[i]);
            if (m.empty())
                return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    string s1="ab",s2="abb";
    Solution().checkInclusion(s1,s2);
    return 0;
}
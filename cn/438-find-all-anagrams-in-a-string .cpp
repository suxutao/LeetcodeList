#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v;
        int n1=s.size(),n2=p.size();
        unordered_map<char,int>m;
        for (int i = 0; i < n2; ++i) {
            --m[p[i]];
        }
        for (int i = 0; i < n2; ++i) {
            ++m[s[i]];
            if (!m[s[i]])
                m.erase(s[i]);
        }
        if (m.empty())
            v.push_back(0);
        for (int i = n2; i < n1; ++i) {
            --m[s[i-n2]];
            if (!m[s[i-n2]])
                m.erase(s[i-n2]);
            ++m[s[i]];
            if (!m[s[i]])
                m.erase(s[i]);
            if (m.empty())
                v.push_back(i-n2+1);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
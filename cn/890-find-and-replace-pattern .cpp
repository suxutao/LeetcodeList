#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string>v;
    map<char,char>m,m2;
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        bool p;
        for (auto &i: words){
            m.clear();p= true;m2.clear();
            for (int j = 0; j < i.size(); ++j) {
                if (!m[pattern[j]]&&!m2[i[j]]){
                    m[pattern[j]]=i[j];
                    m2[i[j]]=pattern[j];
                }else if (i[j]!=m[pattern[j]]||pattern[j]!=m2[i[j]]){
                    p= false;
                    break;
                }
            }
            if (p) v.push_back(i);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
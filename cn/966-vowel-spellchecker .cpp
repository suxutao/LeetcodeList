#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        int n=wordlist.size(),nq=queries.size();
        vector<string>ans(nq),word(wordlist);
        unordered_set<string>s(wordlist.begin(),wordlist.end());
        unordered_map<string,int>m,y;
        for (int i = 0; i < n; ++i) {
            auto&str=word[i];
            for (int j = 0; j < str.size(); ++j) {
                str[j]= tolower(str[j]);
            }
            if (!m.contains(str))
                m[str]=i;
        }
        vector<string>yuan(word);
        for (int i = 0; i < n; ++i) {
            auto&str=yuan[i];
            for (int j = 0; j < str.size(); ++j) {
                if (str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
                    str[j]= '#';
            }
            if (!y.contains(str))
                y[str]=i;
        }
        for (int i = 0; i < nq; ++i) {
            if (s.contains(queries[i])){
                ans[i]=queries[i];
            }else{
                string t,ty;
                for (int j = 0; j < queries[i].size(); ++j) {
                    t.push_back(tolower(queries[i][j]));
                    ty.push_back((t.back()=='a'||t.back()=='e'||t.back()=='i'||t.back()=='o'||t.back()=='u')?'#':t.back());
                }
                if (m.contains(t))
                    ans[i]=wordlist[m[t]];
                else if (y.contains(ty)){
                    ans[i]=wordlist[y[ty]];
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
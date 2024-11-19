#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    unordered_set<string>s['z'];
    long long distinctNames(vector<string>& ideas) {
        ll n=ideas.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            s[ideas[i][0]-'a'].insert(ideas[i].substr(1));
        }
        for (int i = 0; i < 26; ++i) {
            for (int j = i+1; j < 26; ++j) {
                ll cnt=0;
                for (auto &k: s[i]){
                    if (s[j].contains(k))
                        cnt++;
                }
                ans+=(s[i].size()-cnt)*(s[j].size()-cnt)*2;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
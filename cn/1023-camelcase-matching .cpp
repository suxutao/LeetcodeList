#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool f(string s,string p){
        int n=s.size(),np=p.size(),pp=0;
        p.push_back(' ');
        for (int i = 0; i < n; ++i) {
            if (s[i]==p[pp]){
                ++pp;
            }else{
                if (isupper(s[i]))
                    return false;
            }
        }
        return pp==np;
    }
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        int nq=queries.size();
        vector<bool>ans(nq);
        for (int i = 0; i < nq; ++i) {
            ans[i]= f(queries[i],pattern);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
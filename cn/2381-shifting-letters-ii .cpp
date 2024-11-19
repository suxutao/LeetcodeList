#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int>v(s.size()+1);
        for (auto &i: shifts){
            int t=i[2]?1:-1;
            v[i[0]]+=t;
            v[i[1]+1]-=t;
        }
        for (int i = 0; i < s.size(); ++i) {
            if (i) v[i]+=v[i-1];
            if (s[i]+v[i]<'a'){
                s[i]='z'-('a'-v[i]-s[i])%26+1;
                if (s[i]=='z'+1)
                    s[i]='a';
            }else if (s[i]+v[i]>'z'){
                s[i]=(v[i]+s[i]-'a')%26+'a';
            }else{
                s[i]+=v[i];
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
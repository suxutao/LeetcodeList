#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n=s.size();
        string ans;
        unordered_map<string,string>m;
        for (auto &item: knowledge){
            m[item[0]]=item[1];
        }
        for (int i = 0; i < n; ++i) {
            if (s[i]=='('){
                for (int j = i+1; j < n; ++j) {
                    if (s[j]==')'){
                        string t=s.substr(i+1,j-i-1);
                        if (m.contains(t))
                            ans+=m[t];
                        else
                            ans+='?';
                        i=j;
                        break;
                    }
                }
            }else{
                ans+=s[i];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
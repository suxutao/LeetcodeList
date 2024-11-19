#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        vector<int>v(s.size()+1,INT_MAX);
        unordered_map<string,int>m;
        for (int i = 0; i < dictionary.size(); ++i) {
            m[dictionary[i]]=1;
        }
        v[0]=0;
        for (int i = 1; i <= s.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if (m[to_string(s[i-1])]&&m[s.substr(j,i-j)]) {
                    v[i] = min({v[i], v[i - 1], v[j]});
                }else if (m[to_string(s[i-1])]){
                    v[i]= min(v[i],v[i - 1]);
                }else if (m[s.substr(j,i-j)]){
                    v[i] = min({v[i], v[i - 1]+1, v[j]});
                }else{
                    v[i] = min(v[i], v[i - 1]+1);
                }
            }
        }
        return v[s.size()];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
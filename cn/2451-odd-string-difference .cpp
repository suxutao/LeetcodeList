#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string oddString(vector<string>& words) {
        int m=words.size(),n=words[0].size();
        map<vector<int>,int>s,index;
        for (int i = 0; i < m; ++i) {
            vector<int>v(n-1);
            for (int j = 0; j < n-1; ++j) {
                v[j]=words[i][j+1]-words[i][j];
            }
            s[v]++;index[v]=i;
            if (s.size()>1&&i>1){
                for (auto &[a,b]: s){
                    if (b==1)
                        return words[index[a]];
                }
            }
        }
        return "";
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
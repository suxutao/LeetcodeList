#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countSubstrings(string s) {
        int ans=0;
        vector<vector<bool>>v(s.size(),vector<bool>(s.size(),false));
        for (int i = 0; i < s.size(); ++i) {
            v[i][i]=true;ans++;
        }
        for (int i = s.size()-1; i >= 0; --i) {
            for (int j = i+1; j < s.size(); ++j) {
                if (s[i]==s[j]) {
                    if (j==i+1)
                        v[i][j]=true;
                    else if (v[i+1][j-1])
                        v[i][j]=true;
                    if (v[i][j])
                        ans++;
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
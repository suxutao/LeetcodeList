#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.size(),cnt=0;
        vector<int>pos;
        for (int i = 0; i < n; ++i) {
            if (s1[i]!=s2[i]){
                cnt++;
                pos.push_back(i);
            }
        }
        return cnt==0||cnt==2&&s1[pos[0]]==s2[pos[1]]&&s1[pos[1]]==s2[pos[0]];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
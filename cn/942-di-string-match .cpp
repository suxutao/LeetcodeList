#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        int r=s.size(),l=0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]=='I'){
                ans.push_back(l++);
            }else{
                ans.push_back(r--);
            }
        }
        ans.push_back(l);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
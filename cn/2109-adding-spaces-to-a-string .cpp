#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=s.size(),p=0,ns=spaces.size();
        string ans;
        for (int i = 0; i < n; ++i) {
            if (p<ns&&i==spaces[p]){
                ans.push_back(' ');
                ++p;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
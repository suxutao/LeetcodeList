#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        for (int i = 0; i+k-1 < s.size(); i+=k) {
            ans.push_back(s.substr(i,k));
        }
        if (s.size()%k){
            ans.push_back(s.substr(s.size()-s.size()%k));
        }
        ans.back()+=string(k-ans.back().size(),fill);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}
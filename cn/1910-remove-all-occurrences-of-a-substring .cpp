#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.size();
        string ans;
        for (int i = 0; i < n; ++i) {
            ans.push_back(s[i]);
            if (s[i]==part.back()){
                if (ans.size()>=part.size()&&ans.substr(ans.size()-part.size())==part){
                    for (int j = 0; j < part.size(); ++j) {
                        ans.pop_back();
                    }
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